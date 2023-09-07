#include "hash_tables.c"
/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *temp = NULL;

	if (!ht || !key || !(*key) || !value)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL && strcmp(temp->key, key) != 0)
	{
		temp = temp->next;
	}

	if (temp != NULL)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
