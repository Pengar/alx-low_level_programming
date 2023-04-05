#include "main.h"

/**
 * _strlen_recursion - Returns a string length
 * @s: string
 * Return: success 1.
 * error, -1 is returned, and error is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
