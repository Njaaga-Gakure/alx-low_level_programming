#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure, pointer
 *         to the newly allocated space in memory
 *         containing the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int s1length = 0, s2length = 0, size;
	int i = 0, j = 0;
	char *strcon;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1length] != '\0')
		s1length++;
	while (s2[s2length] != '\0')
		s2length++;

	size = s1length + s2length;

	strcon = (char *)malloc(sizeof(char) * size + 1);

	if (strcon == NULL)
		return (NULL);

	while (i < s1length)
	{
		strcon[i] = s1[i];
		i++;
	}
	while (j < s2length)
	{
		strcon[i] = s2[j];
		i++;
		j++;
	}
	strcon[i] = '\0';
	return (strcon);
}
