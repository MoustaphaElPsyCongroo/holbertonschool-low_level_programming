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
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
