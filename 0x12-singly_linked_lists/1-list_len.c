#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @head: Pointer to the list_t list
 *
 * This function counts the number of elements in a linked list by iterating
 * through each node and incrementing the count.
 *
 * @head: Pointer to the head of the linked list
 * Return: Number of elements in the linked list
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
