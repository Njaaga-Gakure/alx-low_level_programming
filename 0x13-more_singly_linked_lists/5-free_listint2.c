#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: double pointer to the first node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
