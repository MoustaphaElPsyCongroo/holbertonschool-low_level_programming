#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return:
 *	1 if numbers passed as arguments contain not digit symbols
 *	0 otherwise
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				puts("Error");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
