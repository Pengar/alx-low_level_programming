#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary number
 * @n: decimal number
 * Return: Non
 */
void print_binary(unsigned long int n)
{
	int k, binary, flag;

	flag = 0;
	if (n == 0)
		_putchar('0');
	for  (k = 63; k >= 0; k--)
	{
		binary = (n >> k);
		if (binary != 0)
			flag = 1;
		if (flag != 0)
		{
			if (binary & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
