#include "main.h"

/**
 * _puts - Entry point
 * @str: pointer string to print
 *Return: no return
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
