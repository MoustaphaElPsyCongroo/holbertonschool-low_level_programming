#include <stdio.h>
/**
 * main - Entry point: Prints all possible combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 0;

	while (first < 9)
	{
		int second = first + 1;
		int uniq = 9 - first;

		while (uniq > 0)
		{
			putchar(first + 48);
			putchar(second + 48);

			if (first < 8)
			{
				putchar(',');
				putchar(' ');
			}

			second++;
			uniq--;
		}	

		first++;
	}

	putchar('\n');

	return (0);
}
