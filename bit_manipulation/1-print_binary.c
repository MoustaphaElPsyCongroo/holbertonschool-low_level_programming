#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to convert to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int j = 0;
	unsigned long int k = 1;
	int digits;

	while (k << j <= n)
		j++;

	if (j > 0)
		j--;

	digits = j + 1;

	while (digits > 0)
	{
		unsigned long int bit = k << j;

		if (bit <= n)
		{
			_putchar('1');
			n -= bit;
		}
		else
		{
			_putchar('0');
		}

		j--;
		digits--;
	}
}
