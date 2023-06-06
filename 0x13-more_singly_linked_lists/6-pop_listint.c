#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked 
 * listint_t list
 * @head: the pointer to the first elements that was being deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
