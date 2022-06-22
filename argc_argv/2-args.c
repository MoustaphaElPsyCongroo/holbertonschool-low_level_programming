#include <stdio.h>

/**
 * main - Prints all argument this program receives
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
