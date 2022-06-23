#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: A pointer to a new string, duplicate of str
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	int length = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i++])
		length++;

	s = malloc(sizeof(char) * length - 1);

	if (s == NULL)
		return (NULL);

	while (j < length)
	{
		s[j] = str[j];
		j++;
	}

	return (s);
}
