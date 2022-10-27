#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: returns a n bytes of a string from src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
		{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
