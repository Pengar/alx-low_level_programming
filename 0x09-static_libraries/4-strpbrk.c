#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints characters of s1 that are in s2 consecutively.
 * @s: string source
 * @accept: searching string
 *
 * Return: new string.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int k, j;

	for (k = 0; *(s + k); k++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + k) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + k);
		}
	}
	return (0);
}
