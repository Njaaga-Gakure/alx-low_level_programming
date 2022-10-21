#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: argument of print_line function
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
