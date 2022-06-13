#include "main.h"

/**
 * print_triangle - Prints a triangle on the terminal
 * @size: The triangle's size
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;
		int k;

		for (i = size; i > 0; i--)
		{
			for (j = i - 1; j > 0; j--)
				_putchar(' ');

			for (k = size - i + 1; k > 0; k--)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
