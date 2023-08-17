#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Iterate over an array and apply a given action to each element.
 * @array: Pointer to the array to iterate over.
 * @size: The number of elements in the array.
 * @action: A pointer to a function that performs an action on each array element.
 *
 * This function takes an array, its size, and a function pointer as arguments.
 * If the array and action function are not NULL, the function iterates through
 * the array and applies the provided action to each element.
 *
 * @array: Pointer to the array of integers to iterate over.
 * @size: The number of elements in the array.
 * @action: A pointer to a function that takes an integer argument and
 *          performs a specific action on it, as defined by the caller.
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
