#include "main.h"

/**
 * flip_bits - Gets the number of bits to flip to convert a number to another
 * @n: First number
 * @m: Second number
 *
 * Return: The number of bits to flip to convert n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while ((n != 0) || (m != 0))
	{
		if ((n & 1) != (m & 1))
			i++;

		n >>= 1;
		m >>= 1;
	}

	return (i);
}
