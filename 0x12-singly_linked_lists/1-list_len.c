#include <stdlib.h>
#include "lists.h"

/**
 * list_len - linked list elementt returned
 * @h: list_t list ponter
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
