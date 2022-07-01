#include "function_pointers.h"

/**
 * array_iterator - Executes a parameter function on each element of an array
 * @array: The array to execute on
 * @size: Array's size
 * @action: A pointer to a function to execute on each element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size > 0 && action != NULL)
	{
		unsigned long int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
