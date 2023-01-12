#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the first node of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count;

	node_count = 0;
	if (h == NULL)
		return (node_count);

	for (; h->next != NULL; node_count++)
		h = h->next;

	if (h->next == NULL)
		node_count++;

	return (node_count);
}
