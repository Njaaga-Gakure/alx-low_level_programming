#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the linked list
 * @str: a string
 * Return: returns pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *t;
	size_t length;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	length = 0;

	while (str[length] != '\0')
		length++;

	new_node->len = length;

	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;

		t->next = new_node;
	}
	return (new_node);
}
