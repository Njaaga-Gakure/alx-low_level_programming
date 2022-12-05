#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number whose bit will be set to zero
 * @index: index to set the bit to 0
 * Return: 1 if it works, otherwise 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);

	i = 1;
	i = i << index;
	if (((*n >> index) & 1) == 1)
		*n = i ^ *n;
	return (1);
}
