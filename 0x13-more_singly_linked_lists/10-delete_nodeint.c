#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specified index
 * @head: double pointer to the first node
 * @index: index of node to be deleted
 * Return: return 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = *head;
	if (index != 0)
	{
		for (i = 1; i < index && ptr != NULL; i++)
			ptr = ptr->next;
		if (ptr == NULL)
			return (-1);
		tmp = ptr->next;
		ptr->next = tmp->next;
		free(tmp);
	}
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
	}
	return (1);
}
