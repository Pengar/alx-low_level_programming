#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print two diagonals.
 * @a: source matrix
 * @size: size NxN matrix
 *
 * Return: chessboard.
 */
void print_diagsums(int *a, int size)
{
	int k, j, sumdiag1 = 0, sumdiag2 = 0, step1, step2;

	for (k = 0; k <= (size - 1); k++)
	{
		step1 =  (size + 1) * k;
		sumdiag1 = sumdiag1 + *(a + step1);
	}

	for (j = 1; j <= size; j++)
	{
		step2 = (size - 1) * j;
		sumdiag2 = sumdiag2 + *(a + step2);
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
