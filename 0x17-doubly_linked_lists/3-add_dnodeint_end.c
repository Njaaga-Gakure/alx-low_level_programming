#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a list dlistint_t
 * @n: data to add to the node
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	temp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->next = NULL;
		new->prev = temp;
		new->n = n;
	}
	return (new);
	free(new);
}
