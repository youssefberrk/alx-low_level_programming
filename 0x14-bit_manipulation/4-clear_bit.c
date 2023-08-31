#include "main.h"

/**
 * clear_bit - modifies the value of a given bit to 0
 * @n: pointer to the number to be modified
 * @index: index of the bit to be cleared
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	while (index > 63)
	{
		*n = (~(1UL << index) & *n);
		return (1);
	}

	return (-1);
}
