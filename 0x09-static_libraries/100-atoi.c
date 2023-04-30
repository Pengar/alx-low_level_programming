#include "main.h"
/**
 * _atoi - srings conversion to an integer.
 * @s: the string to convert
 * Return: converted string.
 */
int _atoi(char *s)
{
	short boolean;
	int k, minus, result;

	k = minus = result = boolean = 0;
	minus = -1;

	while (s[k] != '\0')
	{
		if (s[k] == '-')
			minus *= -1;

		if (s[k] >= '0' && s[k] <= '9')
		{
			result *= 10;
			result -= (s[k] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		k++;
	}
	result *= minus;
	return (result);
}
