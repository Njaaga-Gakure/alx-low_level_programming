#include "main.h"

/**
 * *_strncat - concatenates two strings
 *             but it takes n bytes
 *             from second string
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: returns the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
		i++;

	for (j = 0; *(src + j) != '\0' && j < n; j++)
		*(dest + (i +  j)) = *(src + j);

	return (dest);
}
