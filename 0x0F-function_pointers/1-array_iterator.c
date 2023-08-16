#include <stdio.h>

/**
 * array_iterator - function as a parameter of each element of array
 *@array:array
 *@size:array size
 *@action:pointer
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (action != NULL && array != NULL)
	{
		for (k = 0; k < size; k++)
			action(array[k]);
	}
}
