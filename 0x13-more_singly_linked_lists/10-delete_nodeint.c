#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node on a linked listint_t
 * list at a certain index
 * @head: the pointer to the first element on the list
 * @index: index of  the node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *present = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		++i;
	}

	present = temp->next;
	temp->next = present->next;
	free(present);

	return (1);
}
