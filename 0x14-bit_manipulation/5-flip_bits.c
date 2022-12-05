#include "main.h"

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: returns the number of bits
 * you would need to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j;

	i = n ^ m;

	j = 0;

	while (i > 0)
	{
		if ((i & 1) == 1)
			j++;
		i = i >> 1;
	}
	return (j);
}
