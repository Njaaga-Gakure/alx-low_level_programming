#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check a bit in
 * @index: index of the bit
 * Return: returns value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	i = 0;

	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	return (n & 1);
}
