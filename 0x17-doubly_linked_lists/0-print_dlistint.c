#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the first node of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count;

	node_count = 0;
	if (h == NULL)
		return (node_count);

	for (; h->next != NULL; node_count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		node_count++;
	}
	return (node_count);
}
