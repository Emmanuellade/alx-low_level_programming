#include "main.h"

/**
 * get_endianness - checks if a machine endian sie
 * Return: 0 for big and 7 for small
 */
int get_endianness(void)
{
	unsigned int i = 7;
	char *c = (char *) &i;

	return (*c);
}
