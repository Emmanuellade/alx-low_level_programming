#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer
 * @index: the bit index
 *
 * Return: 1 at success, return -1 if unsuccessful
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
