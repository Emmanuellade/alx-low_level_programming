#include "main.h"

/**
 * positive_or_negative - Determines if a number is positive, negative, or zero
 *
 * @i: The number to be checked
 *
 * Return: void
 */

void positive_or_negative(int i)
{
	/* If i is greater than 0, print that i is positive */
	if (i > 0)
		printf("%d is positive\n", i);

	/* If i is less than 0, print that i is negative */
	else if (i < 0)
		printf("%d is negative\n", i);

	/* Otherwise, print that i is zero */
	else
		printf("%d is zero\n", i);
}
