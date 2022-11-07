#include "main.h"

/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money
 * @argc: command-line argument count
 * @argv: pointer to an array of comand-line arguments
 * Return: return 0 when argument passed is exactly 1, otherwise 0
 */

int main(int argc, char *argv[])
{
	int i = 0, cents, a, b = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		while (i < 5)
		{
			a = cents / coins[i];
			b = b + a;
			cents = cents - (a * coins[i]);
			i++;
		}
		printf("%d\n", b);
	}
	return (0);
}
