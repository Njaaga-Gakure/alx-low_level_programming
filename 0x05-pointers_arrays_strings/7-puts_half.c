#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @str: argument of puts_half function
 */

void puts_half(char *str)
{
	int i, j, n;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	if (i % 2 != 0)
		n = ((i - 1) / 2) + 1;
	else
		n = i / 2;
	for (j = n; *(str + j) != '\0'; j++)
		_putchar(*(str + j));
	_putchar('\n');
}
