#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to search in
 * @c: The character to search in s
 *
 * Return: A pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;

	return (s);
}
