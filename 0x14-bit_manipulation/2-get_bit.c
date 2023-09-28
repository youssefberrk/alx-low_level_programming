#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val = -1;

	while (index <= 63)
	{
		if (index == 0)
		{
			bit_val = n & 1;
			break;
		}

		n = n >> 1;
		index--;
	}

	return (bit_val);
}
