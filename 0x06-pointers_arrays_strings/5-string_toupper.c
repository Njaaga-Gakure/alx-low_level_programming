#include "main.h"
/**
 * *string_toupper - converts lowercase characters in a string
 *                   to uppercase
 * @s: argument of function *string_toupper
 * Return: returns the string in uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) = *(s + i) - 32;
	}
	return (s);
}
