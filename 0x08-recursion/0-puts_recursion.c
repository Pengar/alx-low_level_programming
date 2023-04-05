#include "main.h"

/**
 * _puts_recursion - Prints a string with a new line
 * @s: string
 * Return: success 1.
 * error, -1 is returned, and error is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
