#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: string where the substring will be searched
 * @needle: substring to search for
 * Return: Returns a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
