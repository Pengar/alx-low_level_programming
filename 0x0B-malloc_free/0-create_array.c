#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 *                with a specific char.
 *
 * @size: array length
 * @c: input character
 *
 * Return: An Array Initialized with the specific char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *s;

	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (p = 0; p < size; p++)
	{
		s[p] = c;
	}
	return (s);
}
