#include "main.h"

/**
 * main - multiplies two numbers
 * @argc:  command-line argument count
 * @argv: pointer to an array of command-line arguments
 * Return: returns a 0 when two numbers are entered otherwise 1
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
}
