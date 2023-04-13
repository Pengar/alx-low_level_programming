#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_calloc - allocate memory array usingmalloc
 * @nmemb: elements number
 * @size: byte sizes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *q;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	q = malloc(nmemb * size);

	if (q == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		q[i]  = 0;
	}
	return (q);
}
