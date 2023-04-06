#include "main.h"

/**
 * sqrt2 - Evaluate from 1 to n
 * @a: equal n
 * @b: iterates number from 1 to n
 * Return: success 1.
 * error, -1 is returned, and error is set appropriately.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns square root of n
 * @n: Integer number
 * Return: success 1.
 * error, -1 is returned, and error is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
