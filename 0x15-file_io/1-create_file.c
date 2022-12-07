#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file
 * @text_content: string to be written to the file
 * Return: 1 on success, 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, strlen;


	if (filename == NULL)
		return (-1);

	strlen = 0;

	if (text_content != NULL)
	{
		while (text_content[strlen] != '\0')
			strlen++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, strlen);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
