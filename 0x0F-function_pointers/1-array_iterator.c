#include "function_pointers.h"

/**
 * array_iterator - is a type of function that executes another function
 * @array: Pointer to the arra
 * @size: array size
 * @action: Pointer to the would-be function to be executed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
