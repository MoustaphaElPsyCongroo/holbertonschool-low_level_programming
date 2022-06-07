#include <stdio.h>
/**
 * main - Entry point: Prints the alphabet in lowercase, except letters q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 96;

	while (letter < 122)
	{
		letter++;

		if (letter == 113 || letter == 101)
			continue;

		putchar(letter);
	}

	putchar('\n');

	return (0);
}
