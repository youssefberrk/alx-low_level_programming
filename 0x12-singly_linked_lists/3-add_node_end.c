#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Double pointer to the list_t list
 * @str: String to put in the new node
 *
 * This function creates a new node with the given string and adds it at the
 * end of the linked list. It allocates memory for the new node and duplicates
 * the input string.
 *
 * @head: Double pointer to the head of the linked list
 * @str: String to put in the new node
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
