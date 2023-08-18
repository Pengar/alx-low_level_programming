#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings -print strings with a new line
 *@separator: separator
 *@n:number of arguments
 * Return: tsum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;
	char *p;
	char array[] = "(nil)";

	va_start(valist, n);
	for (k = 0; k < n; k++)
	{
		p = va_arg(valist, char *);
		if (p == NULL)
			p = array;
		if (k != (n - 1) && separator != NULL)
		{
			printf("%s%s", p, separator);
		} else
		{
			printf("%s", p);
		}
	}
	printf("\n");
	va_end(valist);
}
