#include <stdio.h>
/**
 * main - Entry point: Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 122;

	while (i > 96)
		putchar(i--);

	putchar('\n');

	return (0);
}
