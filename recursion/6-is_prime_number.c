#include "main.h"
/**
 * guess_not_prime - Guesses if a number is not prime
 * @a: First operand
 * @b: Second operand
 * @n: The number to check against the product of a and b
 *
 * Return: 0 if n is not prime, 1 otherwise
 */
int guess_not_prime(int a, int b, int n)
{
	if (n < 0)
		return (0);

	if (a * b == n)
		return (0);

	if (a * b > n)
		return (1);

	return (guess_not_prime(a + 1, b + 1, n));
}

/**
 * is_prime_number - Stores a number to check if it is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (guess_not_prime(0, 0, n));
}
