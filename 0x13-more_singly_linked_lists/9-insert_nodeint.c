#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: data (integer) to add to the new node
 * Return: returns a pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	ptr = *head;

	if (idx != 0)
	{
		for (i = 1; i < idx && ptr != NULL; i++)
			ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = ptr->next;
		ptr->next = new_node;
	}
	else if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
