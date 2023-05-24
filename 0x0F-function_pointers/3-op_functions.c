#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 * Return: a+b
 */

int op_add(int a, int b)
{

	return (a + b);
}

/**
 * op_sub - Returns the difference between the two numbers.
 * @a: The 1st number
 * @b: The 2nd number
 * Return: The difference between both numbers
 */

int op_sub(int a, int b)
{

	return (a - b);
}

/**
 * op_mul - it retrns the product of two numbers.
 * @a: The 1st number
 * @b: The 2nd number.
 * Return: The product of declared numbers a and b
 */

int op_mul(int a, int b)
{

	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{

	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{

	return (a % b);
}
