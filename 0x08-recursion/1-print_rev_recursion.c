#include "main.h"

/**
 * _print_rev_recursion - reverse the string and print
 * @s: string
 *
 * Return: success 1.
 * error, -1 is returned, and error is set appropriately.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
