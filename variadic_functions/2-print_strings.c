#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list strings;

	if (n > 0)
	{
		va_start(strings, n);

		while (i--)
		{
			printf("%s", va_arg(strings, int *) ? va_arg(strings, int *) : "(nil)");

			if (i > 0 && separator != NULL)
				printf("%s", separator);
		}

		putchar('\n');
	}
}
