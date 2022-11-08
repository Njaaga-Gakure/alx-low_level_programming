#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to initialize the array
 * Return: returns NULL if size is 0 or if it fails
 *         otherwise it returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *chars;

	if (size == 0)
		return (NULL);

	chars = (char *)malloc(sizeof(char) * size);

	if (chars == NULL)
		return (NULL);
	while (i < size)
	{
		*(chars + i) = c;
		i++;
	}
	return (chars);
}
