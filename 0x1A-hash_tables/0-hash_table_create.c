#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 *
 * @size: size
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	hash_node_t **array;
	unsigned long int i;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}

	newtable->array = array;
	newtable->size = size;

	return (newtable);
}
