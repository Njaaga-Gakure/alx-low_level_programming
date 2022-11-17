#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own
 * @ac: argument count
 * @av: argument vector
 * Return: 0 when successful
 */

int main(int ac, char **av)
{
	int n, i;
	char *ptr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(av[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", ptr[i]);

		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
