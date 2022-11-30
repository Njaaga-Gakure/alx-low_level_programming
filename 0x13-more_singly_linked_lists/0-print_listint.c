#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a struct
 * Return: returns the number of elements in a list
 */

size_t print_listint(const listint_t *h)
{
	size_t elem;

	for (elem = 0; h != NULL; elem++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elem);
}
