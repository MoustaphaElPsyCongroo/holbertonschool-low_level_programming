#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to print
 */
void puts2(char *str)
{
	char *i;

	for (i = str; *i > 0; i += 2)
		_putchar(*i);

	_putchar('\n');
}
