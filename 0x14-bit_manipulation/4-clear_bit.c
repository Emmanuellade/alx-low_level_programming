#include "main.h"

/**
 * clear_bit - Value of a bit at a given index to 0.
 * @n: Points to the bit.
 * @index: The index
 *
 * Return: -1 for error, otherwise, 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 6))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
