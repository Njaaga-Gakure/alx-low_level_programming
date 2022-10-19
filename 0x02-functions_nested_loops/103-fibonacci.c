#include <stdio.h>

/**
 * main - print only sum of the even-valued terms
 * Return: Returns a 0 if successful
 */
int main(void)
{
	unsigned long x = 0, y = 1, z;
	int i;
	unsigned long sum = 0;

	for (i = 0; i <= 100; i++)
	{
		z = x + y;
		if (z < 4000000)
		{
			if (z % 2 == 0)
			{
				sum = sum + z;
			}
			x = y;
			y = z;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
