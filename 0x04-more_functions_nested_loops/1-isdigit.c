#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: _isdigit function argument
 * Return: Return 1 if it's a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
		result = 1;
	else
		result = 0;
	return (result);
}
