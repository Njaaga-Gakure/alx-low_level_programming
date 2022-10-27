#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first argument
 * @src: second argument
 * Return: Returns the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
		i++;
	for (j = 0; *(src + j) != '\0'; j++)
		*(dest + (j + i)) = *(src + j);
	return (dest);
}

