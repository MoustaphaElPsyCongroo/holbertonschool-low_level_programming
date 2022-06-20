#include "main.h"

/**
 * _strlen_recursion - Gets the length of a string
 * @s: The string to evaluate
 *
 * Return: s' length
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == 0)
	{
		return (count);
	}
	else
	{
		count++;
		return (count + _strlen_recursion(s + 1));
	}
}
