#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer that points to a pointer
 *     that points to a string
 * @to: string to change to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
