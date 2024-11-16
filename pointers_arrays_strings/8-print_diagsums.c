#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 *                  of a square matrix of integers.
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, primary_sum = 0, secondary_sum = 0;

	for (i = 0; i < size; i++)
	{
		primary_sum += a[i * size + i];
		secondary_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", primary_sum, secondary_sum);
}
