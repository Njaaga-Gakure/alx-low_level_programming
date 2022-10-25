#include "main.h"

/**
 * *_strcpy - copies the the string pointed to by src
 *            to the buffer pointed to by dest
 * @dest: first argument
 * @src: second argument
 * Return: returns dest if successful
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
