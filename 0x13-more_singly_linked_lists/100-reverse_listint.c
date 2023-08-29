#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the first node in the list.
 *
 * Return: Pointer to the first node in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	for (; *head; *head = next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}

	*head = prev;

	return (*head);
}
