#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: previous list of nodes
 * @str: value to be added to the elements
 * Return: pointer to the new created node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	length = 0;

	while (str[length] != '\0')
		length++;

	new_node->len = length;

	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
