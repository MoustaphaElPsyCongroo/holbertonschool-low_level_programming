#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it
 * with a specific char
 * @size: The array's size
 * @c: The char to initialize the array with
 *
 * Return: A pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');

	s = malloc(size);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
