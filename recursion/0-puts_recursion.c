#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s > 0)
		_puts_recursion(s + 1);
}
