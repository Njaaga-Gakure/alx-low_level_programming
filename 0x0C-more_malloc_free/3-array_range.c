#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: first array element
 * @max: last array element
 * Return: returns NULL if min > max,
 *         or malloc fails,
 *         otherwise returns pointer
 *         to new array
 */

int *array_range(int min, int max)
{
	int i, length = 0, j = 0;
	int *p;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	p = malloc(sizeof(int) * length);

	if (p == NULL)
		return (NULL);
	i = min;
	while (j < length)
	{
		p[j] = i;
		j++;
		i++;
	}
	return (p);
}
