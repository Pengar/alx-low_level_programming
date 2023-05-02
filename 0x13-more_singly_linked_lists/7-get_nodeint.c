#include "lists.h"

/**
 * get_nodeint_at_index - nth node is return of a linked list
 * @head: pointer head list
 * @index: index of the node required
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int k = 0;

	while (head != NULL)
	{
		if (k <= index)
		{
			if (k == index)
			{
				cursor = head;
				break;
			}
			head = head->next;
			k++;
		}
		else
			return (NULL);
	}
	return (cursor);
}
