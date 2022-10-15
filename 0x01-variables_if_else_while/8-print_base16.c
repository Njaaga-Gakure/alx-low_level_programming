#include <stdio.h>

/**
 * main - Program execution starts here
 *
 * Return: Returns a 0 if program is successful
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
