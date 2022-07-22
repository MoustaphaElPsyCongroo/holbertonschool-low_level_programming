#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to examine
 * @index: Index of the bit to retrieve
 *
 * Return: The value of the bit at index index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j = 0;
	unsigned long int k = 1;
	unsigned int digits;
	int bit_val = -1;

	while (k << j <= n)
	{
		if (j == 64)
			break;

		j++;
	}

	if (j > 0)
		j--;

	digits = j + 1;

	if (index > digits)
		return (0);

	while (digits > index)
	{
		unsigned long int bit = k << j;

		if (bit <= n)
		{
			bit_val = 1;
			n -= bit;
		}
		else
		{
			bit_val = 0;
		}

		j--;
		digits--;
	}

	return (bit_val);
}
