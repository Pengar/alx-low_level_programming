#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: decimal num
 * @index: index
 * Return: 1 if it worked or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, var;

	var = 0;
	mask = 1;
	if (index > 63)
		return (-1);
	var = *n & ~(mask << index);
	*n = var;
	return (1);
}
