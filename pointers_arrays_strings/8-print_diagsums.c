#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of ints
 * @a: The square matrix of ints
 * @size: The matrix's size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first_diag = 0;
	int second_diag = 0;

	for (i = 0; i < size; i++)
		first_diag += a[i * (size + 1)];

	for (i = size; i > 0; i--)
		second_diag += a[i * (size - 1)];

	printf("%d, %d\n", first_diag, second_diag);
}
