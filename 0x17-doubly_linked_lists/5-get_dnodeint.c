#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: list
 * @index: index
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count = 0;
	dlistint_t *traverse;

	traverse = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (count != index && traverse != NULL)
	{
		traverse = traverse->next;
		count++;
	}
	if (traverse == NULL)
	{
		return (NULL);
	}
	return (traverse);
}
