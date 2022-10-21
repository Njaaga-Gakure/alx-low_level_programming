#include "main.h"

/**
 * _isupper - Checks of character is upper or lowercase
 * @c: argument of _isupper function
 * Return: Returns 1 if character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int result;

	if (isupper(c))
		result = 1;
	else
		result = 0;
	return (result);
}
