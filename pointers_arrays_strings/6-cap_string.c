#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string
 *
 * Return: A pointer to str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (
				str[i] == ' ' ||
				str[i] == '\t' ||
				str[i] == '\n' ||
				str[i] == ',' ||
				str[i] == ';' ||
				str[i] == '.' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == '}'
		   )
		{
			if (str[i + 1] > 0 && str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
	}

	return (str);
}
