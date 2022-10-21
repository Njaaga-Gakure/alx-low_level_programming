#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: argument of the print_triangle function
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');

		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

