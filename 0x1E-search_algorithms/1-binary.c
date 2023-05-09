#include "search_algos.h"

/**
 * binary_search - searches an array using binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: index the value is found at, -1 otherwise
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t min, mid, max, i;

	min = 0;
	max = size - 1;

	if (array == NULL)
		return (-1);

	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i < max)
				printf(", ");
			if (i == max)
				printf("\n");
		}
		mid = (min + max) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			min = mid + 1;
		}
		else
		{
			max = mid - 1;
		}

	}
	return (-1);

}
