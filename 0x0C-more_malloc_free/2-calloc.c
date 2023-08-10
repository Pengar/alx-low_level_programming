#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Entry point
 *@nmemb: array size
 *@size: size of the type
 *Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int i;
	unsigned int t;
	char *f;

	if (size == 0 || nmemb == 0)
		return (NULL);
	t = nmemb * size;
	array = malloc(t);
	f = (char *)array;
	if (f != NULL)
	{
		for (i = 0; i < t; i++)
			f[i] = 0;
		return (f);
	}
	return (NULL);
}
