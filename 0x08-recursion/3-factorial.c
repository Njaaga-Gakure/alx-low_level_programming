#include "main.h"
/**
 * factorial - prints the factorial of a number
 * @n: the number you want to get the factorial of
 * Return: return the factorial of the number
 *         if the number is >= 0 and -1
 *         if the number is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
