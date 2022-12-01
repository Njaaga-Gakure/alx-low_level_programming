#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: double pointer to the first node
 *        of the old list
 * Return: returns the first node
 *         of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *tmp2;

	tmp = NULL;

	while ((*head) != NULL)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp;
		tmp = (*head);
		(*head) = tmp2;
	}
	(*head) = tmp;
	return (*head);
}
