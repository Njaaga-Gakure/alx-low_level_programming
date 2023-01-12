#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data in a list
 * @head: pointer to the first node
 * Return: sum of the data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	sum += head->n;
	return (sum);
}
