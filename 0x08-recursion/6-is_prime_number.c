#include "main.h"
/**
 * is_prime_number - check whether a number is
 *                   a prime number
 * @n: the number to check
 * Return: returns 1 if the input integer is a prime number,
 *         otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - check whether a number
 *               is a prime number
 * @x: the number to check
 * @y: iterations of numbers to divide by
 *     x to check if x is a prime number
 * Return: returns 1 if x if a prime number,
 *         otherwise 0
 */

int check_prime(int x, int y)
{
	if (x % y == 0)
		return (0);
	else if (y * y > x)
		return (1);
	return (check_prime(x, y + 1));
}
