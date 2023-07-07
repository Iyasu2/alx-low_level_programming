#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table where the element will be added to
* @key: key of the element
* @value: value associated with the key
*
* Return: 1 for success 0 for failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}

