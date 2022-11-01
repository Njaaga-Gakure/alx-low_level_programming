#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the characters to be matched
 * Return: returns a pointer to the byte in s
 *         that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
