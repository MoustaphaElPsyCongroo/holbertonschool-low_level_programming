#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers
 * @n: The number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;

	for (i = 0; i < j; i++)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;

		j--;
	}
}
