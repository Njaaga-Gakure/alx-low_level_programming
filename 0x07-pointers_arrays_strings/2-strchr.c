#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: pointer that points to the string
 * @c: character to be searched for
 * Return: returns a pointer to the first occurence
 *         of the character or NULL if the character
 *         is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
