#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints elements of a linked list with lengths
 * @h: Pointer to the list_t list to be printed
 *
 * This function iterates through a linked list and prints the content and
 * length of each node. If a node's string is NULL, it prints "(nil)" as
 * the content.
 *
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes_printed = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes_printed++;
	}

	return (nodes_printed);
}
