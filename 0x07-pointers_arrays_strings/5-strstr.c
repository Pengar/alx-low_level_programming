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
