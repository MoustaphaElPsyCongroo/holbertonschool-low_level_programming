#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints any argument passed to this function
 * @format: List of types of arguments passed to the function:
 *	c: char
 *	i: integer
 *	f: float
 *	s: char (if string is NULL prints (nil) instead
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	va_list strings;
	char *string;

	va_start(strings, format);

	while (format && format[i])
	{

		if (i > 0)
			separator = ", ";

		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(strings, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(strings, int));
				break;
			case 'f':
				printf("%s%d", separator, va_arg(strings, int));
				break;
			case 's':
				string = va_arg(strings, char *);

				if (string == NULL)
					string = "(nil)";

				printf("%s%s", separator, string);
				break;
		}

		i++;
	}

	va_end(strings);
	putchar('\n');
}
