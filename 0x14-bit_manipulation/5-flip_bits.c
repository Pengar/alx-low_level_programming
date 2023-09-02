#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: decimal num 1
 * @m: decimal num 2
 * Return: the number of bits I need to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, k;

	count = 0;
	for (k = 0; k < 64; k++)
	{

		if (((n >> k) & 1) != ((m >> k) & 1))
		{
			count++;

		}

	}
	return (count);
}
