#include "lists.h"

/**
 * listint_len - returns the number of elements
 *               in a linked listint_t list
 * @h: pointer to a struct
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t elem;

	for (elem = 0; h != NULL; elem++)
		h = h->next;
	return (elem);
}
