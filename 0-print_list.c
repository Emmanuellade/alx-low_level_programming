#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the list_t elements
 * @h: Points to the head of the list
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);

count++;
h = h->next;
}
return (count);
}
