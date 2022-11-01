#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: memory address where the value will be set
 * @b: value to be set
 * @n: number of bytes to be set to that value
 * Return: returns a pionter to memory address s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
