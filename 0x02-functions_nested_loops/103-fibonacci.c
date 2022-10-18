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

	printf("%lu, %lu, ", x, y);
	for (i = 0; i <= 50; i++)
	{
		if (z < 4000000 && z % 2 == 0)
		{
			printf("%lu", z);
			if (i < 27)
			{
				printf(", ");
			}
		}
		x = y;
		y = z;
		z = x + y;
	}
	printf("\n");
	return (0);
}
