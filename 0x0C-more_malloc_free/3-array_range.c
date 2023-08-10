#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that create array integer
 *@min: min
 *@max: max
 * Return: a pointer to an array
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int i, k, count;

	count = 0;
	if (min > max)
		return (NULL);
	k = (max - min) + 1;
	array = malloc(k * sizeof(int));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[count] = i;
			count++;
		}
		return (array);
	}
	return (NULL);
}
