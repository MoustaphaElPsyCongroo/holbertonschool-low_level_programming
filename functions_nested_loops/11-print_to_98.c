#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from the specified number to 98
 * @n: The number from which to print to 98
 */
void print_to_98(int n)
{
	int i;

	for (i = n; n <= 98 ? i < 99 : i > 97; n <= 98 ? i++ : i--)
	{
		printf("%d", i);

		if (i != 98)
			printf(", ");
	}

	printf("\n");
}
