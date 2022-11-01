#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first string
 * @accept: string that contains the characters to be matched
 * Return: Returns the number of bytes in the initial segment
 *         of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int substrlen = 0;
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
					substrlen++;
			}
		}
		else
			return (substrlen);
	}
	return (substrlen);
}
