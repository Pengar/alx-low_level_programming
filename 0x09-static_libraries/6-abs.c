#include "main.h"
/**
 * _abs - calculate a value of a number from zero.
 * @i: the integer converted.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
