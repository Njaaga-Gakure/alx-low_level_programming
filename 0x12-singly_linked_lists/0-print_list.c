#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the structure list_t
 * Return: node count
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0 ; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
