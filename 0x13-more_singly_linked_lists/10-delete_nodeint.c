#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes node at a specific index
 * @head: list
 * @index: index
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverse, *ptr;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	traverse = *head;
	while (traverse != NULL)
	{
		traverse = traverse->next;
		i++;
	}
	if (index > i)
	{
		return (-1);
	}
	i = 0;
	traverse = *head;
	if (index == 0)
	{
		*head = traverse->next;
		free(traverse);
		return (1)
	}
	while (traverse != NULL && i < index - 1)
	{
		traverse = traverse->next;
		i++;
	}
	ptr = traverse->next;
	traverse->next = ptr->next;
	free(ptr);
	return (1);
}
