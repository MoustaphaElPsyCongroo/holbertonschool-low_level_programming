#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string's half to print
 */
void puts_half(char *str)
{
	int i = 0;
	int length;

	while (str[i])
		i++;

	length = i;

	if (length % 2 > 0)
		i = (i + 1) / 2;
	else
		i /= 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
