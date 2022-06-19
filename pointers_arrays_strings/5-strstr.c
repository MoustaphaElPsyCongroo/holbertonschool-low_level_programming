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
	int i;

	while (*haystack)
	{
		i = 0;

		while (needle[i] == *(haystack + i))
		{
			if (needle[i] == 0)
				return (haystack);

			i++;
		}

		haystack++;
	}

	return (0);
}
