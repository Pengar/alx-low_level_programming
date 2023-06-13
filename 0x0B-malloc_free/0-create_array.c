#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create an array of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (k < size)
	{
		s[k] = c;
		k++;
	}
	s[k] = '\0';
	return (s);
}
