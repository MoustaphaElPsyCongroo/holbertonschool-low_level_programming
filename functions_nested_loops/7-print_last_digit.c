#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to check
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	if (n == -2147483648)
	{
		n = 8;
		return (n);
	}

	if (n < 0)
		n *= -1;

	n %= 10;

	_putchar(n + '0');

	return (n);
}
