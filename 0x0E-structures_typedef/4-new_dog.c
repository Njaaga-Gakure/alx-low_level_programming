#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns a pointer new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
		return (NULL);

	dog2->name = malloc(sizeof(char) * _strlen(name) + 1);

	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	else
		dog2->name = _strcpy(dog2->name, name);

	dog2->age = age;

	dog2->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	else
		dog2->owner = _strcpy(dog2->owner, owner);

	return (dog2);
}

/**
 * _strlen - prints out the length of a string
 * @s: argument of _strlen function
 * Return: return 0 when successful
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * *_strcpy - copies the the string pointed to by src
 *            to the buffer pointed to by dest
 * @dest: first argument
 * @src: second argument
 * Return: returns dest if successful
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
