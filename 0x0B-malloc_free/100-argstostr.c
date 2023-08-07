#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - main entry
 * @ac: input
 * @av: double pointe
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, p = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[p] = av[i][n];
			p++;
		}
		if (str[p] == '\0')
		{
			str[p++] = '\n';
		}
	}
	return (str);
}
