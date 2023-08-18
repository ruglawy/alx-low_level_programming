#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at a giden index
 * @h: list
 * @idx: index
 * @n: value
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr1;
	dlistint_t *ptr2;
	dlistint_t *new;
	unsigned int size = 0;
	unsigned int count = 0;

	ptr1 = *h;
	new = malloc(sizeof(dlistint_t));
	if (ptr1 == NULL && idx != 0)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	while (ptr1 != NULL)
	{
		size++;
		ptr1 = ptr1->next;
	}
	if (idx > size)
	{
		return (NULL);
	}
	ptr1 = *h;
	while (count != idx - 1)
	{
		ptr1 = ptr1->next;
		count++;
	}
	ptr2 = ptr1->next;
	new->next = ptr2;
	ptr1->next = new;
	ptr2->prev = new;
	new->prev = ptr1;

	return (new);
}
