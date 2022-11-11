#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the value to be allocated the memory
 * Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
