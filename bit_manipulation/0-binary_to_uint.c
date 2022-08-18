#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A string of 0 and 1 chars
 *
 * Return:
 *	b converted to unsigned int
 *	0 if b contains chars other than 0 or 1, or if b NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int j = 0;
	int length = 0;
	int result = 0;

	if (b == NULL)
		return (0);

	while (b[length])
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		length++;
	}

	for (i = length - 1; i > -1; i--)
	{
		if (b[i] == '1')
			result += 1 << j;

		j++;

	}

	return (result);
}
