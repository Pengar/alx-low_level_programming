#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - integer
 *@s:string
 *
 * Return: no return
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k;
k = 0;
	while (k < 5)
	{
		if (s[0] == ops[k].op[0])
			return ((ops[k].f));
		k++;
	}
	return (NULL);
}
