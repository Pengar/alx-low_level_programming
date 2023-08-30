#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -  function that returns node of a listint_t
 * @head: Address of the first node
 * @index: Position of the node
 * Return: Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;

	if (head == NULL)
		return (NULL);
	for (k = 0; k < index; k++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
