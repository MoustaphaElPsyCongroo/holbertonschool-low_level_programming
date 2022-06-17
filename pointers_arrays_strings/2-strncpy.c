#include "main.h"

/**
 * _strncpy - Copies a string, with at most n bytes from src
 * @dest: The destination buffer to copy src to
 * @src: The string to copy to dest
 * @n: The number of bytes of src to copy to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = 0;
		i++;
	}

	return (dest);
}
