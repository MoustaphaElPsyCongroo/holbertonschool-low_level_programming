#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements of the array
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory, 0 if fails or one argument NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	while (i++ < nmemb)
		a[i] = 0;

	a[i] = 0;

	return (a);
}
