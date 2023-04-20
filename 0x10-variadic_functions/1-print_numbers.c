#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry Point
 * @separator: space
 * @n: elements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int j;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (j = 1; j < n; j++)
		printf("%s%d", sep, va_arg(list, int));
	printf("\n");
	va_end(list);
}
