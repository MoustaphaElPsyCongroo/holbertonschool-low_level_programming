#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: The string to evaluate
 *
 * Return: s' length
 */
int _strlen(char *s)
{
	char *i;
	int count = 0;

	for (i = s; *i > 0; i++)
		count++;

	return (count);
}
