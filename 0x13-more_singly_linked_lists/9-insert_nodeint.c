#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts node at a specific index
 * @head: list
 * @idx: index
 * @n: int variable
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *traverse, *new;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (NULL);
	}
	traverse = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (traverse != NULL && i < idx - 1)
	{
		traverse = traverse->next;
		i++;
	}
	if (traverse == NULL)
	{
		return (NULL);
	}
	new->next = traverse->next;
	traverse->next = new;
	return (new);

}
