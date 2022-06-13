#include "main.h"


/**
 * print_line - Draws a straight line in the terminal
 * @n: The line's length in '_'
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar('_');
	}

	_putchar('\n');
}
