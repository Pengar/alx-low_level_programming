#include <stdio.h>

/**
 * int_index -  function that searches for an integer
 *@array:array
 *@size:size
 *@cmp:function pointer
 * Return: no return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p, count;

	count = 0;
	if (array != NULL && cmp != NULL)
	{
		for (p = 0; p < size; p++)
		{
			if (cmp(array[p]) != 0)
			{
				count++;
				return (p);
			}
		}
	}
	if (size <= 0 || count == 0)
		return (-1);
	else
		return (0);
}
