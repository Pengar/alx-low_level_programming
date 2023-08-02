#include "main.h"

/**
  * factorial -function the return the factorial of a number
  * @n:factorial number to return
  *
  * Return: integer value
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
