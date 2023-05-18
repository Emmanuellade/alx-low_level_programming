#include <stdlib.h>
#include "main.h"

/**
 * *_memset - it fills memory with a constant byte
 * @s: is the memory area to be filled
 * @b: is the char to copy
 * @n: is the number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		s[t] = b;
	}

	return (s);
}

/**
 * *_calloc - it allocates memory for an array
 * @nmemb: is the number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
