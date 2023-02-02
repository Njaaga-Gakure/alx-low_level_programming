#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the table
 * @key: key of the element
 * @value: value of the element
 * Return: 1 on success, 0 on failure
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_table_item, *tmp;
	unsigned long int index;

	if (strlen(key) == 0 || strlen(value) == 0)
		return (0);
	else if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}

	hash_table_item = malloc(sizeof(hash_node_t));

	if (hash_table_item == NULL)
		return (0);

	hash_table_item->key = strdup(key);
	if (hash_table_item->key == NULL)
		return (0);

	hash_table_item->value = strdup(value);
	if (hash_table_item->value == NULL)
		return (0);

	hash_table_item->next = ht->array[index];
	ht->array[index] = hash_table_item;
	return (1);
}
