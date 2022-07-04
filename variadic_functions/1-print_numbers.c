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

	if (separator != NULL && n > 0)
	{
		va_start(integers, n);

		while (i--)
		{
			if (i > 0)
				printf("%d%s", va_arg(integers, int), separator);
			else
				printf("%d", va_arg(integers, int));
		}

		va_end(integers);
	}

	putchar('\n');
}
