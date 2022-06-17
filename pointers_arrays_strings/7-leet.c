#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string
 *
 * Return: A pointer to str
 */
char *leet(char *str)
{
	int i;
	int j;
	char min_char[] = {'a', 'e', 'o', 't', 'l'};
	char maj_char[] = {'A', 'E', 'O', 'T', 'L'};
	char leet[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == min_char[j] || str[i] == maj_char[j])
				str[i] = leet[j];
		}
	}

	return (str);
}
