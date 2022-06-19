#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The memory area to fill
 * @b: The byte to fill memory with
 * @n: The number of bytes of memory to fill
 *
 * Return: A pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
