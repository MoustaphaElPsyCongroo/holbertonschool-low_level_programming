#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the terminal
 * @n: The diagonal's length in '\'
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			j = i;
			while (j--)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
