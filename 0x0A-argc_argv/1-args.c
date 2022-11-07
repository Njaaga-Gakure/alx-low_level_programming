#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command-line argumments
 * @argv: pointer to an array of command-line aguments
 * Return: returns a 0 if successful
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
