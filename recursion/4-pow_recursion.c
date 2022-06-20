#include "main.h"

/**
 * _pow_recursion - Raises a number to a power
 * @x: The number to raise
 * @y: The power to raise x to
 *
 * Return: The result of x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
