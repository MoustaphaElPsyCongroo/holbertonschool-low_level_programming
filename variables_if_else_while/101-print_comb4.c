#include <stdio.h>
/**
 * main - Entry point: Prints all possible combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 0; first < 8; first++)
	{
		for (second = first + 1; second < 9; second++)
		{
			for (third = second + 1; third < 10; third++)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');

				if (first < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
