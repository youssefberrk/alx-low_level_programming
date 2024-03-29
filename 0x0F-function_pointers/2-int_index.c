#include "function_pointers.h"

/**
 * int_index - Return the index where comparison returns true, else -1.
 * @array: Array of integers.
 * @size: Size of the array.
 * @cmp: Pointer to a comparison function.
 * Return: Index of element where comparison is true, or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
