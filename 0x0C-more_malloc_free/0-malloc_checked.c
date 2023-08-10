#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 *@b: string
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *i = NULL;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
