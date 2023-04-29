#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: list
 * @index: index
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
