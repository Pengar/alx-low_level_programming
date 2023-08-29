#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: Pointer
 * Return: Int
 **/

size_t listint_len(const listint_t *h)
{
	unsigned int cnr = 0;
	const listint_t *tp;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
