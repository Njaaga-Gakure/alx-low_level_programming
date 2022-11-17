#include "3-calc.h"

/**
 * get_op_func - selects the operation
 *               to be performed based
 *               on the operator given
 * @s: operator passed as an argument
 * Return: returns a pointer to a function
 *         determined by the operator
 *         passed as an argument
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
