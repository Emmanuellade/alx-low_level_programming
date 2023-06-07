#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns no of elements in a linked list
 * @h: Points  head of the list
 *
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
