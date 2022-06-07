#include <stdio.h>
/**
 * main - Entry point: Prints all single digits with only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);

	putchar('\n');

	return (0);
}
