#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @i: The integer to compute from
 *
 * Return: The absolute value of int
 */
int _abs(int i)
{
	if (i < 0)
		i *= -1;

	return (i);
}
