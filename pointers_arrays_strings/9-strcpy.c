#include "main.h"

/**
 * _strcpy - Copies a string to a buffer
 * @dest: The buffer where to copy the string to
 * @src: The string to copy
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i + 1] = 0;

	return (dest);
}
