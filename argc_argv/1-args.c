#include <stdio.h>

/**
 * main - Prints the number of this program's arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
