#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints parameter numbers followed by a separator
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list integers;

	if (n > 0)
	{
		va_start(integers, n);

		while (i--)
		{
			printf("%d", va_arg(integers, int));

			if (i > 0 && separator != NULL)
				printf("%s", separator);
		}

		putchar('\n');
		va_end(integers);
	}

}
