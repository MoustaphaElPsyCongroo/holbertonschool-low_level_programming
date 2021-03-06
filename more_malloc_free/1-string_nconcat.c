#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string to concatenate to s1
 * @n: Number of bytes of s2 to concatenate to s1
 *
 * Return:
 *	A pointer to the new string s1 followed by the first n bytes of s2
 *	NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int s1_length = 0;
	unsigned int s2_length  = 0;
	unsigned int bytes_toconcat = 0;
	char *s;

	if (s1 != NULL)
	{
		while (s1[s1_length])
			s1_length++;
	}

	if (s2 != NULL)
	{
		while (s2[s2_length])
			s2_length++;
	}

	bytes_toconcat = s2_length;
	if (n < s2_length)
		bytes_toconcat = n;

	s = malloc(sizeof(char) * (s1_length + bytes_toconcat + 1));

	if (s == NULL)
		return (NULL);

	while (i < s1_length + bytes_toconcat)
	{
		if (i < s1_length)
			s[i] = s1[i];
		else
			s[i] = s2[i - s1_length];

		i++;
	}

	s[i] = '\0';

	return (s);
}
