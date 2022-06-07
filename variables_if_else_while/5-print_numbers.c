#include <stdio.h>

/**
 * main - Entry point: Print all single digit numbers starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
		printf("%d", i++);

	putchar('\n');

	return (0);
}
