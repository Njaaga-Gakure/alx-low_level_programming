#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at specified index
 * @head: pointer to the first node
 * @index: index of the node to be deleted
 * Return: 1 on success, 0 on failure
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index ; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	if (temp->next == NULL)
		temp->prev->next = NULL;
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}

