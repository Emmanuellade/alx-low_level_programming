#include <stdio.h>

/**
 * swap_int - It swaps the values of two integers
 * @d: integer to swap
 * @e: integer to swap
 */

void swap_int(int *d, int *e)
{
int a;

a = *d;
*d = *e;
*e = a;
}
