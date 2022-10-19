#include <stdio.h>

/**
 * main - program starting point
 * Return: Returns a 0 if success
 */
int main(void)
{
	unsigned long x = 1;
	unsigned long y = 2;
	int i;
	unsigned long z = x + y;

	printf("%lu, %lu, ", x, y);
	for (i = 3; i < 93; i++)
	{
		printf("%lu", z);
		if (i < 93)
		{
			printf(", ");
		}
		x = y;
		y = z;
		z = x + y;
	}
	printf("\n");
	return (0);
}
