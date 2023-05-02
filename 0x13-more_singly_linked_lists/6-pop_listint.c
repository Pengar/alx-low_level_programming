#include "lists.h"

/**
 *pop_listint - deletes linked list header's node
 *@head: head of the list
 *
 *Return: deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
