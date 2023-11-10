#include "lists.h"
/**
 * free_dlistint -  adds a new node at the end of a dlistint_t list.
 * @head: head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
