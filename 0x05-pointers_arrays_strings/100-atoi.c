#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: argument of _atoi function
 * Return: returns j if successful
 */
int _atoi(char *s)
{
	int i;
	unsigned int j = 0;
	int k = 1;
	int x = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
		{
			k = k * -1;
		}
		for (; *(s + i) >= 48 && *(s + i) <= 57; i++)
		{
			x = 1;
			j = (j * 10) + (*(s + i) - '0');
		}
		if (x == 1)
		{
			break;
		}
	}
	j = j * k;
	return (j);
}
