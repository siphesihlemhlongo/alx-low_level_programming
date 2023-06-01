#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node
 * at the beginning of a list_t list
 * @head: double the pointer to the list_t list
 * @str: A new string to add on the node
 * Return: NULL if it fails or Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		++len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
