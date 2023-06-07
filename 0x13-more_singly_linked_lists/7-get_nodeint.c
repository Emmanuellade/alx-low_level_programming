#include "lists.h"

/**
 * get_nodeint_at_index - linked list node
 * @head: head of the listint_t list.
 * @index: Index of the node with indices atarting at zero
 *
 * Return: If node does not exist - NULL.
 *         else - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
