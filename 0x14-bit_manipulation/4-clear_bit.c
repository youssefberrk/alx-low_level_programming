#include "main.h"

/**
 * clear_bit - modifies the value of a given bit to 0
 * @n: pointer to the number to be modified
 * @index: index of the bit to be cleared
 *
 * Return: 1 if the bit is cleared, -1 if the index is out of range
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
