#include <stdio.h>

/**
 * main - print only sum of the even-valued terms
 * Return: Returns a 0 if successful
 */
int main(void)
{
	unsigned long x = 1;
	unsigned long y = 2;
	int i;
	unsigned long z = 1 + 2;

	for (i = 0; i <= 50; i++)
	{
		x = y;
		y = z;
		z = x + y;
		if (x % 2 == 0 && x < 4000000 && y % 2 == 0 && y < 4000000)
		{
			print("%lu", z);
		}
	}
	printf("\n");
	return (0);
}
