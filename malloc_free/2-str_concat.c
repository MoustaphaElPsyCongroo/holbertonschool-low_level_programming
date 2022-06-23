#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: A pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int s1_length = 0;
	int s2_length = 0;
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

	s = malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (s == NULL)
		return (NULL);

	while (i < s1_length + s2_length)
	{
		if (i < s1_length)
			s[i] = s1[i];
		else
			s[i] = s2[i - s1_length];

		i++;
	}

	return (s);
}
