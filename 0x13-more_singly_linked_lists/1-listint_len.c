#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list.
 * @h: Linked list of type listint_t to traverse.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	for (; h; h = h->next)
	{
		num++;
	}

	return (num);
}
