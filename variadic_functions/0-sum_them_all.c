#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of all parameters
 * @n: The number of variable parameters
 *
 * Return: The sum of all parameters, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = n;
	int sum = 0;
	va_list integers;

	va_start(integers, n);

	if (n == 0)
		return (0);

	while (i--)
		sum += va_arg(integers, int);

	va_end(integers);

	return (sum);
}
