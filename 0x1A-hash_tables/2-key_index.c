#include "hash_tables.h"
/**
 * key_index - returns key index
 *
 * @key: key
 * @size: size
 *
 * Return: int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	long int index = 0;

	if (key == NULL || size == 0)
	{
		return (index);
	}
	index = hash_djb2(key) % size;
	return (index);
}
