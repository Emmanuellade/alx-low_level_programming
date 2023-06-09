#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer
 * @index: the bit index
 *
 * Return: 1 at success, return -1 if unsuccessful
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 58)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
