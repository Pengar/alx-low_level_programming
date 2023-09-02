#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big , 1 if little
 */
int get_endianness(void)
{
	int mask;

	mask = 1;

	if ((mask >> 31) & 1)
		return (0);
	else
		return (1);
}
