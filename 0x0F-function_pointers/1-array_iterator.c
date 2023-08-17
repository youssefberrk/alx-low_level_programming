#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Iterate over an array, applying an action to each element.
 * @array: Pointer to the array to iterate over.
 * @size: Number of elements in the array.
 * @action: Pointer to a function performing action on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
