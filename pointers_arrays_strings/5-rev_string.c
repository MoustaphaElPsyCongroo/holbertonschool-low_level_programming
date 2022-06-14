#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int temp;
	int length;

	while (s[i] > 0)
		i++;

	length = i;
	i--;

	while (j < length / 2)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i--;
		j++;
	}
}
