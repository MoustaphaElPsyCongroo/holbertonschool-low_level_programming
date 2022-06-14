#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to reverse
 */
void print_rev(char *s)
{
	char *i = s;

	while (*i > 0)
		i++;

	for (i--; i > s - 1; i--)
		_putchar(*i);

	_putchar('\n');
}
