#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *@str: string to duplicate
 * Return: a pointer string or NULL
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int p;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (p = 0; str[p] != '\0'; p++)
			strnew[p] = str[p];
	} else
	{
		return (NULL);
	}
	strnew[p] = '\0';
	return (strnew);
}
