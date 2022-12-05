#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a number whose bit is to be set
 * @index: index to be set
 * Return: return 1 if it works, 0 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	i = 1;
	i = i << index;
	*n = *n | i;
	return (1);
}
