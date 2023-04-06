#include "main.h"

/**
 * prime2 - Evaluate from 1 to n
 * @a: as n
 * @b: iterates from 1 to n
 * Return: success 1.
 * error, -1 is returned, and error is set appropriately.
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: integer number
 * Return: On success 1.
 * error, -1 is returned, and error is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
