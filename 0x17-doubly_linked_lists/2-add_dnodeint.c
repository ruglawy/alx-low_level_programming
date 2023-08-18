#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of the list
 * @head: head
 * @n: element
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		h->next = NULL;
		h->prev = NULL;
		return (new);
	}
	new->next = h;
	h->prev = new;
	*head = new;

	return (new);
}
