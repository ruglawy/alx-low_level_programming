#include "lists.h"
#include <stdio.h>
/**
 * add_node - adds node in the beginning of the list
 * @head: head of list
 * @str: string to be added
 *
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new = NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = *head;
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;

	return (*head);
}
