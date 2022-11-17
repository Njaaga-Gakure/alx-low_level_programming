#include "3-calc.h"

/**
 * main - prints the result of the operation
 *        determined by the operator passed
 *        as the second argument
 * @ac: argument count
 * @av: argument vector
 * Return: return 0 if successful
 */
int main(int ac, char **av)
{
	int (*calc)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(av[2]);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calc(atoi(av[1]), atoi(av[3])));
	return (0);
}
