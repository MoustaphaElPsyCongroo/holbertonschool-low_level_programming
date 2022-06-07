#include <stdio.h>
/**
 * main - Entry point: Prints the alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 97;

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}

	letter = 65;
	while (letter < 91)
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
