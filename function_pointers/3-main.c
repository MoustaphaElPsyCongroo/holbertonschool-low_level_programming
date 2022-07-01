#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Checks parameters and starts calculation if no problem
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return:
 *	0 if no error
 *	98 if the number of arguments is wrong
 *	99 if the operator is not + - * / or %
 *	100 if trying to divide by 0
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	char *op;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	op = argv[2];

	if ((
			op[0] != '+' &&
			op[0] != '-' &&
			op[0] != '*' &&
			op[0] != '/' &&
			op[0] != '%') ||
			op[1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((op[0] == '/' || op[0] == '%') && b == 0)
	{
		puts("Error");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
