#include "main.h"

/**
 * _strncat - Concatenates two strings, at most n bytes from src to dest
 * @dest: The destination string to concatenate src to
 * @src: The string's n bytes to concatenate to dest
 * @n: The number of src bytes to concatenate to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j]; j++)
		dest[i + j] = src[j];

	dest[i + j] = 0;

	return (dest);
}
