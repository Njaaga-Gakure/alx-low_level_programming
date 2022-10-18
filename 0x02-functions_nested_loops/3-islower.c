#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: parameter for function _islower
 * Return: Returns 1 if character is lowercase and 0 if uppercase
 */
int _islower(int c)
{
	int result;

	if (islower(c))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
