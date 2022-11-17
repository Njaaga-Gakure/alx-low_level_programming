#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  prints a name
 * @name: a pointer to the name
 * @f: funtion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}

