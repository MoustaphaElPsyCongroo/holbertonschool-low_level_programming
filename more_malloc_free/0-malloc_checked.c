#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory
 * @b: The amount of memory bytes to allocate
 *
 * Return:
 *	A pointer to the allocated memory
 *	Nrmal process termination with a status value of 98 otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	else
		return (c);
}
