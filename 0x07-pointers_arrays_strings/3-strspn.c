#include "main.h"
/**
 * _strspn - prints characters of s1 that are in s2 consecutively.
 * @s: source string
 * @accept: string to search
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, j;

	for (j = 0; *(s + j); j++)
	{
		for (k = 0; *(accept + k); k++)
		{
			if (*(s + j) == *(accept + k))
				break;
		}
	if (*(accept + k) == '\0')
		break;
	}
	return (j);
}
