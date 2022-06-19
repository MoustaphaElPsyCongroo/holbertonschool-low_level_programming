#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The bytes to search in s's initial segment
 *
 * Return: Number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		unsigned int initial_count = count;

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (count == initial_count)
			break;
	}

	return (count);
}
