#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: bytes each
 * Return: returns NULL if nmemb or size is 0
 *         or if malloc fails, otherwise returns
 *         a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}
