#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - decribes a dog
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
