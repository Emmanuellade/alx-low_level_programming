#include "lists.h"

/**
 * sum_listint - the sum of all the data of a linked list
 * @head: head of the list
 * Return: if list is empty - 0
 *		else - sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
