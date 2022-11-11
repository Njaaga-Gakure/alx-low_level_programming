#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes from s2 to be copied
 * Return: returns NULL if it fails,
 *         otherwise returns pointer p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1 = 0, ls2 = 0, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[ls1] != '\0')
		ls1++;
	while (s2[ls2] != '\0')
		ls2++;

	if (n >= ls2)
		n = ls2;

	p = malloc(sizeof(char) * (ls1 + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
