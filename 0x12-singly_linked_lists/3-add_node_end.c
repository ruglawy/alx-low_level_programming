#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - adds node to the end of a list
 * @head: list
 * @str: string
 *
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *ptr;

	ptr = *head;
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (ptr == NULL)
	{
		*head = node;
		return (*head);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}i
	ptr->next = node;

	return (*head);
}
