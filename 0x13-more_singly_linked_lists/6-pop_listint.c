#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: double pointer to the head node
 * Return: returns  head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (tmp == NULL)
		return (0);
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
