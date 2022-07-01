#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search in
 * @size: The array's size
 * @cmp: A pointer to the function used to compare values
 *
 * Return:
 *	The index of the first element for which cmp is true (not return 0)
 *	-1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
