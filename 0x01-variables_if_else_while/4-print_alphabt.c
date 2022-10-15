#include <stdio.h>

/**
 * main - program execution starts here
 * Return: Returns a 0 if program is successful
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			i = i;
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
