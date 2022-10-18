#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter for function _isalpha
 * Return: Returns 1 if character is an alphabet
 *         0 if character is not an alphabet
 */
int _isalpha(int c)
{
	int result;

	if (isalpha(c))
		result = 1;
	else
		result = 0;
	return (result);
}
