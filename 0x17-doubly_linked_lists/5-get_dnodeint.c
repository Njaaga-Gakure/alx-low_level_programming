#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at a specified index
 * @head: pointer to the first node
 * @index: the index of the node you want to get
 * Return: the node at the specified index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
		return (head);
}
