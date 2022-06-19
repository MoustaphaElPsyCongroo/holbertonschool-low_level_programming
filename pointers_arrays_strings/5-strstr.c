#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search in haystack
 *
 * Return:
 *	A pointer to the beginning of the located substring
 *	NULL if the substring isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		i = 0;

		while (1)
		{
			if (needle[i] == 0)
				return (haystack);

			if (needle[i] != *(haystack + i))
				break;

			i++;
		}

		haystack++;
	}

	return (0);
}
