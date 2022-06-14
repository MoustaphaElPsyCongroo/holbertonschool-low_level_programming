#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
	char *i;

	for (i = str; *i > 0; i++)
		_putchar(*i);

	_putchar('\n');
}
