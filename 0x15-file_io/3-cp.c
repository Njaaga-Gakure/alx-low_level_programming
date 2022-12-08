#include "main.h"

/**
 * cp_file - copies content from one file to another
 * @file_from: source file
 * @file_to: destination file
 * Return: returns 1 one success
 */

int cp_file(char *file_from, char *file_to)
{
	int ff, ft, rd, wr, cff, cft;
	char buffer[1024];

	ff = open(file_from, O_RDONLY);
	if (ff == -1)
		return (98);

	ft = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
		return (99);

	do {
		rd = read(ff, buffer, 1024);
		if (rd == -1)
			return (98);

		wr = write(ft, buffer, rd);
		if (wr == -1)
			return (99);
	} while (rd == 1024);

	cff = close(ff);
	if (cff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}

	cft = close(ft);

	if (cft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}

	return (0);
}

/**
 * main - start of the program
 * @ac: argument count
 * @av: argument vector
 * Return: returns 0 on success
 */

int main(int ac, char **av)
{
	int n;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	n = cp_file(av[1], av[2]);

	if (n == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (n == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	return (0);
}
