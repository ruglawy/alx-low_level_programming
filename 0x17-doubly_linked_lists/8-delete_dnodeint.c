#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes at a specific node
 * @head: list
 * @index: index
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1;
	dlistint_t *ptr2;
	dlistint_t *tmp;
	unsigned int size = 0;
	unsigned int count = 0;

	ptr1 = *head;
	if (ptr1 == NULL)
	{
		return (-1);
	}
	while (ptr1 != NULL)
	{
		size++;
		ptr1 = ptr1->next;
	}
	if (index >= size)
	{
		return (-1);
	}
	ptr1 = *head;
	while (count != index)
	{
		ptr1 = ptr1->next;
		count++;
	}
	tmp = ptr1;
	ptr1 = tmp->prev;
	ptr2 = tmp->next;
	ptr1->next = ptr2;
	ptr2->prev = ptr1;
	free(tmp);
	return (1);
}
