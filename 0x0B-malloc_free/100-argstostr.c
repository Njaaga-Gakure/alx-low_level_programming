#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count of the arguments
 * @av: arguments of your program
 * Return: returns NULL if it fails,
 *         otherwise a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *strarg;
	int i, j, k = 0, length = 0, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	size = length + 1;

	strarg = malloc(sizeof(char) * size);
	if (strarg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			strarg[k] = av[i][j];
			k++;
		}
		strarg[k] = '\n';
		k++;
	}
	return (strarg);
}
