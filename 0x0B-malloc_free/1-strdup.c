#include "main.h"

/**
 * _strdup - allocates space for a new string
 *           and copies the original string
 *           to the newly allocated space
 * @str: dtring to be copied
 * Return: returns NULL if str is NULL,
 *         NULL if if insufficient memory was available,
 *         otherwise returns the pointer
 *         to the newly allocated space
 */

char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *stringdup;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	stringdup = (char *)malloc(sizeof(char) * size + 1);

	if (stringdup == NULL)
		return (NULL);
	while (i < size)
	{
		stringdup[i] = str[i];
		i++;
	}
	stringdup[i] = '\0';
	return (stringdup);
	free(stringdup);
}
