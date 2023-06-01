#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that add a new node at the end
 * of a list_t list
 * @h: double the pointer to the list_t list
 * @str: string to put on to the new node
 * Return: NULL if its failed, or address of the new element
 */
list_t *add_node_end(list_t **h, const char *str)
{
	list_t *new;
	list_t *temp = *h;
	unsigned int len = 0;

	while (str[len])
		++len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
