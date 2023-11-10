#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	current_head = *head;

	if (current_head != NULL)
	{
		while (current_head->next != NULL)
			current_head = current_head->next;
		current_head->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = current_head;

	return (new);
}
