#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - takes an integer n and prints
 *               integers from n to 98
 * @n: parameter of print_to_98 fuction
 * Return: returns values from n to 98
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
		}
	}
	printf("\n");
}
