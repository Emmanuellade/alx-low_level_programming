#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @index: bit index
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit_index;

	if (index > 63)
		return (-1);

	val_bit_index = (n >> index) & 1;

	return (val_bit_index);
}
