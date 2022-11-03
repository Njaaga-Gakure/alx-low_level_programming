#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number whose square root we want to find
 * Return: return the square root of a number if the number has a
 *         natural squaroot otherwise returns -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root(1, n));
}

/**
 * root - runs guesses and checks for possible
 *        square roots
 * @x: guess
 * @y: number whose square root we want to find
 * Return: returns the square root if the number
 *         has a natural square root otherwise
 *         returns -1
 */

int root(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (root(x + 1, y));
}
