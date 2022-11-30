#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: double pointer to a list
 * @n: integer to add to the new node
 * Return: Returns a pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;


	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
	}
	return (new_node);
}
