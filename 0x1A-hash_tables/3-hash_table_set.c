#include "hash_tables.h"

/**
 * hash_table_set - adds or update an element in hash table
 * @ht: pointer to the hash table
 * @key: key to add
 * @value: value associated with key
 *
 * Return: 0 on failure, else 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copy;
	unsigned long int idx, i;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(copy);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
