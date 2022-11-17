#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to be searched
 * @size: size of the array
 * @cmp: function pointer
 * Return: returns the index of the first element
 *         for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);

			if (result != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
