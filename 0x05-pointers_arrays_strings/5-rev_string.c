#include "main.h"

/**
 * rev_string - reverses a string
 * @s: argument of rev_string function
 */

void rev_string(char *s)
{
	int i, x, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	k = i - 1;
	for (j = 0; j < k; j++, k--)
	{
		x = *(s + j);
		*(s + j) = *(s + k);
		*(s + k) = x;
	}
}
