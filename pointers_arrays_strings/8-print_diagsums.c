#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer to the first element of the square matrix.
 * @size: the size of the matrix (both rows and columns).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i]; /* main diagonal: a[0][0], a[1][1], ... */
		sum2 += a[i * size + (size - 1 - i)]; /* anti-diagonal: a[0][size-1], a[1][size-2], ... */
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
