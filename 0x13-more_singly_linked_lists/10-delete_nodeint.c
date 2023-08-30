#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: First node
 * @index: nod position to delete
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (k = 0; k < index - 1; k++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
