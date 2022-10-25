#include "main.h"

/**
 * swap_int - swaps the value of one integer with another
 * @a: first argument
 * @b: second argument
 */

void swap_int(int *a, int *b)
{
	int p, q;

	p = *a;
	q = *b;

	*a = q;
	*b = p;
}
