#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Double pointer to the list_t list
 * @str: New string to add in the node
 *
 * This function creates a new node with the given string and adds it at the
 * beginning of the linked list. It allocates memory for the new node and
 * duplicates the input string.
 *
 * @head: Double pointer to the head of the linked list
 * @str: String to add in the new node
 * Return: The address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
