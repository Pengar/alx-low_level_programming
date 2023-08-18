#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum
 * @n: num of args
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum;
	unsigned int p;

	sum = 0;
	va_start(valist, n);
	if (n == 0)
		return (0);
	for (p = 0; p < n; p++)
		sum += va_arg(valist, unsigned int);
	va_end(valist);
	return (sum);
}
