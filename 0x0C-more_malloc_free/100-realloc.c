#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  function reallocation
 *@ptr: pointer
 *@old_size: size allocated ptr
 *@new_size: size memory block
 * Return: a pointer to an array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array = NULL;
	char *k = NULL;
	unsigned int i;
	char *px = NULL;

	if (ptr == NULL)
	{
		array = malloc(new_size);
		if (array == NULL)
			return (NULL);
		return (array);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size ==  old_size)
		return (ptr);
	k = malloc(new_size);
	if (k != NULL)
	{
		px = (char *)ptr;
		for (i = 0; i < old_size; i++)
			k[i] = px[i];
		free(ptr);
		return (k);
	}
	return (NULL);
}
