#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *              if NULL, treat it as an empty string
 *              The function should return NULL on failure
 *
 * @s1: Output string
 * @s2: input string
 *
 * Return: The returned pointer should point to a newly allocated space in
 *         memeory which contains the contents of s1, followed by the contents 
 *          of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int P, b;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (P = 0; s1[P] != '\0'; P++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	s = (char *)  malloc(((a + b) + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (P = 0; s1[P] != '\0'; P++)
	{
		s[P] = s1[P];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		s[P] = s2[b];
		P++;
	}
	return (s);
}
