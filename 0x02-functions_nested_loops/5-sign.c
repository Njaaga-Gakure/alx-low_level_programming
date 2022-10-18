#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: parameter of print_sign function
 * Return: Returns 1 if number is positive
 *          0 if number is 0
 *	   -1 if number is negative
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
