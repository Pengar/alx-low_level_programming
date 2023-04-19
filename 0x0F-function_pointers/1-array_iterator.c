#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates an array style
 * @array: an array
 * @size: the size
 * @action: something
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
