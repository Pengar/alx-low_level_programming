#include "lists.h"

/**
 * list_len - find the elements in a linked list
 *@h: pointer to the list
 *
 *Return: element number
*/

size_t list_len(const list_t *h)
	{
		size_t elements = 0;

		while (h)
		{
			elements++;
			h = h->next;
		}

		return (elements);
	}
