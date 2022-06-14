#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to print
 */
void puts2(char *str)
{
	char *i = str;

	do {
		if (*i)
			_putchar(*i);
		else
			break;
		i += 2;
	} while (*(i - 1));

	_putchar('\n');
}
