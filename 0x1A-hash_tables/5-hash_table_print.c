#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 *
 * @ht: ht
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *sep;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (temp != NULL)
			{
				printf(", ");
			}
		}
		if (i < ht->size - 1)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
