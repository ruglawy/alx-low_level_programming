#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: list
 * @n: el
 *
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (h == NULL)
	{
		*head = new;
		return (new);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	new->n = n;
	new->prev = h;
	new->next = NULL;
	h->next = new;

	return (new);
}
