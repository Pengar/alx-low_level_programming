#include "main.h"

/**
 * _pow_recursion - x to the power of y
 * @x: Number Integer
 * @y: Power
 *
 * Return: success 1.
 * error, -1 is returned, and error is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
