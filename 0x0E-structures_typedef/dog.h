#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - decribes a dog
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
