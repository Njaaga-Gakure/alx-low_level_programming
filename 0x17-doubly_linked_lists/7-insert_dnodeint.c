#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a specified index
 * @h: pointer to the first node of the list
 * @idx: the index
 * @n: data to add on the new node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *first_node, *last_node;
	unsigned int i;
	size_t node_count;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		first_node = add_dnodeint(h, n);
		return (first_node);
	}

	node_count =  list_len(*h);
	if (idx > node_count)
		return (NULL);
	if (idx == node_count)
	{
		last_node = add_dnodeint_end(h, n);
		return (last_node);
	}
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	temp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	temp->next->prev = new;
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	new->n = n;
	return (new);
}

/**
 * list_len - returns the number of nodes in a list
 * @h: pointer to the first node of the list
 * Return: number of nodes
 */
size_t list_len(dlistint_t *h)
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
