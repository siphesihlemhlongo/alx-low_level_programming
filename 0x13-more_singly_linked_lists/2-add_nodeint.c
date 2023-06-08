#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning
 * of the linked listint_t list
 * @head: pointer to the first node on the list
 * @n: the data to insert on that new node
 * Return:the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
