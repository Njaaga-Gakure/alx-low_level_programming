#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number represented as a string
 * Return: returns the converted number
 * or 0 if one or chars of the string is not 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, pow;
	const char *s;

	s = b;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}
	b--;

	num = 0;
	pow = 0;
	while (b >= s)
	{
		num = num +  ((*b - '0') * (1 << pow));
		b--;
		pow++;
	}
	return (num);
}
