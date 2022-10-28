#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: argument for *rot13 function
 *
 * Return: returns an encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char letter[53] = {
		'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd',
		'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h',
		'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l',
		'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p',
		'Q', 'q', 'R', 'r', 'S', 's', 'T', 't',
		'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x',
		'Y', 'y', 'Z', 'z'
			  };
	char encoder[53] = {
		'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q',
		'R', 'r', 'S', 's', 'T', 't', 'U', 'u',
		'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y',
		'Z', 'z', 'A', 'a', 'B', 'b', 'C', 'c',
		'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g',
		'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k',
		'L', 'l', 'M', 'm'
			   };

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (letter[j] == *(s + i))
			{
				*(s + i) = encoder[j];
				break;
			}
		}
	}
	return (s);
}
