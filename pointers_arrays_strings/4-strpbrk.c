#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search in
 * @accept: The characters to search in s
 *
 * Return:
 *	A pointer to the byte in s that matches one of the bytes in accept
 *	NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}

		s++;
	}

	return (0);
}
