#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: argument for *leet function
 * Return: returns an encoded string
 */

char *leet(char *s)
{
	int i, j;
	char letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encoder[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == letter[j])
				*(s + i) = encoder[j];
		}
	}
	return (s);
}
