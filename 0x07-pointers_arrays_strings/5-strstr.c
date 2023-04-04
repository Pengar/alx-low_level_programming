#include "main.h"
/**
 * _strstr - prints characters of s1 that are in s2 consecutively.
 * @haystack: string source
 * @needle: string to search
 *
 * Return: new string.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * occurrence - define string j is inside i.
 * @i: source string
 * @j: searched string
 *
 * Return: 1 if there is occurrence, otherwise 0.
 */
int occurrence(char *i, char *j)
{
	while (*j && *b == *i)
	{
		j++;
		i++;
	}

	if (*j == '\0')
		return (1);
	else
		return (0);
}
