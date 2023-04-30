#include "main.h"
/**
 * _strchr - prints from the first char.
 * @s: string sourse
 * @c: tested char
 *
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
