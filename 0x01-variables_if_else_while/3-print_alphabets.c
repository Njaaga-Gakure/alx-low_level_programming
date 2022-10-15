#include <stdio.h>

/**
 * main - Program execution starts here
 * Return: Returns a 0 if program is successful
 */
int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
