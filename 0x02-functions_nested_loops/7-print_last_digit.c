#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: parameter of print_last_digit
 * Return: Returns the last digit of a number
 */
int print_last_digit(int num)
{
	int lastDigit = abs(num) % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
