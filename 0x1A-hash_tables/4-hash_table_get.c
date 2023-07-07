#include "hash_tables.h"

/**
 * hash_table_get - 'retrieve a value from the hash table'
 * @key: key
 * @ht: hash table to retrieve the value from
 *
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}

	return (NULL);
}

