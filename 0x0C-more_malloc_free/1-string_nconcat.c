#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - two strings concatonate
 * @s1: first string
 * @s2: second string
 * @n: limit s2
 * Return: pointer to a new space memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, e;
	int coun1 = 0;
	char *q;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		coun1 = coun1 + 1;
	}

	q = malloc(sizeof(*q) * (coun1 + n + 1));
	if (q == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		q[j] = s1[j];
	}
	for (e = 0; s2[e] != '\0' && e < n; e++, j++)
	{
		q[j] = s2[e];
	}
	q[j] = '\0';
	return (q);
}
