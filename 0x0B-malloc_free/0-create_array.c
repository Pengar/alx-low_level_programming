#include "main.h"
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * @size: array size
  * @c: char to fill in the array
  *
  * Return: return a pointer to array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
