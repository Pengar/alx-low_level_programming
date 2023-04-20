#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Entry Point
 * @n: variable inputs
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int j, sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (sum);
}
