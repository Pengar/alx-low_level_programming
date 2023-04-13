#define "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int *h;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	h = malloc(sizeof(*h) * (size + 1));

	if (h == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++, min++)
	{
		h[i] = min;
	}
	return (h);
}
