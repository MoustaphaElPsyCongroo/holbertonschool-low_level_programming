#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * get_argv_total_length - Gets the total length of each strings of an array
 * @count: Number of strings
 * @a: Array of strings
 *
 * Return: The total length of each strings of a
 */
int get_argv_total_length(int count, char **a)
{
	int i;
	int total_length = 0;

	if (count == 0 || a == NULL)
		return (0);

	for (i = 0; i < count; i++)
	{
		int k = 0;

		while (a[i][k++])
			total_length++;
	}

	total_length += count;

	return (total_length);
}

/**
 * argstostr - Concatenates all the arguments of this program
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: A pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int letter_count = 0;
	int total_length = get_argv_total_length(ac, av);
	char *s;
	int i;
	int j;

	if (ac == 0 || av == NULL)
		return (NULL);

	if (total_length == 0)
		return (NULL);

	s = malloc(sizeof(char) * (total_length + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int current_length = 0;
		int k = 0;

		while (av[i][k++])
			current_length++;

		for (j = 0; j < current_length; j++)
		{
			s[letter_count] = av[i][j];
			letter_count++;

			if (j == current_length - 1)
			{
				s[letter_count] = '\n';
				letter_count++;
			}
		}
	}

	return (s);
}
