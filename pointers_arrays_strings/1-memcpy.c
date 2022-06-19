#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: The memory area to copy to
 * @src: The memory area to copy to dest
 * @n: The number of bytes from src to copy to dest
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
