#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t
 * @head: pointer to the first node
 * Return: sum of all the integers in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;
	return (sum);
}
