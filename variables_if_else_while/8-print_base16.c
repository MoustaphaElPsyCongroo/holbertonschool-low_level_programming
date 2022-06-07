#include <stdio.h>
/**
 * main - Entry point: Prints all base 16 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);

	i = 97;

	while (i < 103)
		putchar(i++);

	putchar('\n');

	return (0);
}
