#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: first element of the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
while (h != NULL)
	{
h = h->next;
	i++;
	}
	return (i);

}
