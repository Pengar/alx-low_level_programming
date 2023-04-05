#include "main.h"

/**
 * factorial - factorial of n
 * @n: integer
 * Return: success 1.
 * error, -1 is returned, and error is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

