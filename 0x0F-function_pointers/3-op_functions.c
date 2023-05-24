#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers.
 * @a: is the first number.
 * @b: is the second number.
 *
 * Return: is the sum of both numbers a and b
 */

int op_add(int a, int b)
{

	return (a + b);
}

/**
 * op_sub - subtracts two numbers.
 * @a: is the first number.
 * @b: is the second number.
 *
 * Return: The difference of both numbers.
 */

int op_sub(int a, int b)
{

	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: is the first number.
 * @b: is the second number.
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{

	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: is the first number.
 * @b: is the second number.
 *
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{

	return (a / b);
}

/**
 * op_mod - Returns the remaining of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{

	return (a % b);
}
