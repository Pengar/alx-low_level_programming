#include <stdio.h>
#include "main.h"

/**
* _pow - function that converts a binary number
* @num: number
* @n: number of times
* Return: result
*/
unsigned int _pow(unsigned int num, unsigned int n)
{
	unsigned int sum, i;

	sum = 1;
	for (i = 0; i < n; i++)
	{
		sum = sum * num;

	}
	return (sum);
}

/**
 * binary_to_uint - Binary int
 * @b: binary number
 * Return: the converted
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int decimal, i, k;

	decimal = 0;
	i = 0;
	decimal = 0;
	if (b == NULL)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (((b[k]) != '0') && ((b[k]) != '1') && ((b[k]) != '\0'))
			return (0);
	}
	k = k - 1;
	while (b[i] != '\0')
	{
		if ((b[k - i]) == '1')
		{
			if (i == 0)
				decimal += 1;
			else
				decimal += _pow(2, i);
		}
		i++;
	}
	return (decimal);
}
