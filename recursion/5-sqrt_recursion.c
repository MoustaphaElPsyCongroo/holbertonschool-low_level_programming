#include "main.h"

/**
 * _guess_sqrt - Guesses the natural square root of a number
 * @i: The guess number
 * @n: The number to guess the square root of
 *
 * Return: The natural sqrt of n or -1 if it doesn't exist
 */
int _guess_sqrt(int i, int n)
{
	if (i * i == n)
		return (i);

	if (i * i > n || i > n / 2)
		return (-1);

	return (_guess_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - Stores a number to calculates its natural square root
 * @n: The number
 *
 * Return: The square root of n, or -1 if n does not have a natural one
 */
int _sqrt_recursion(int n)
{
	return (_guess_sqrt(0, n));
}
