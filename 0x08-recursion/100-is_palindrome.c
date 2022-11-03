#include "main.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to the string whose length we want to find
 * Return: returns the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return
		(1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer pointing to the string
 * Return: returns 1 if the string is a palindrome,
 *         0 otherwise
 */

int is_palindrome(char *s)
{
	if (_strlen_recursion(s) == 0)
		return (1);
	return (check_for_pal(s, 0, _strlen_recursion(s) - 1));
}

/**
 * check_for_pal - checks if a string is a palindrome
 * @x: pointer to the string to be checked
 * @y: the 0th index of the string
 * @z: the last index of the string
 * Return: returns 1 if the string is palindrome
 *         0 otherwise
 */

int check_for_pal(char *x, int y, int z)
{
	if (x[y] == x[z])
	{
		if (y > z / 2)
			return (1);
		else
			return (check_for_pal(x, y + 1, z - 1));
	}
	else
		return (0);
}
