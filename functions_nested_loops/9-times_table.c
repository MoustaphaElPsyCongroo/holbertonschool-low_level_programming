#include "main.h"
/**
 * first_digit - Gets the first digit of a number
 * @n: The number to check
 *
 * Return: The first digit of n
 */
int first_digit(int n)
{
	while (n > 9)
		n /= 10;

	return (n);
}

/**
 * last_digit - Gets the last digit of a number
 * @n: The number to check
 *
 * Return: The last digit of n
 */
int last_digit(int n)
{
	return (n % 10);
}

/**
 * print_2digit_number - Prints numbers up to two digit
 * @n: The number to print
 */
void print_2digit_number(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar(first_digit(n) + '0');
		_putchar(last_digit(n) + '0');
	}
}

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			print_2digit_number(result);

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
