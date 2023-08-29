#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer.
 * Return: Int.
 **/

size_t print_listint(const listint_t *h)
{
	unsigned int cntr = 0;
	const listint_t *tp;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
