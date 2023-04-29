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

	if (*head == NULL && idx != 0)
		return (NULL);
	traverse = *head;
	while (traverse != NULL)
	{
		traverse = traverse->next;
		i++;
	}
	if (idx > i + 1)
	{
		return (NULL);
	}
	traverse = *head;
	i = 0;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = traverse;
		*head = new;
		return (new);
	}
	while (traverse != NULL && i < idx - 1)
	{
		traverse = traverse->next;
		i++;
	}
	new->next = traverse->next;
	traverse->next = new;
	return (new);

}
