#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list, even if it has a loop.
 * @h: Pointer to the pointer to the first node in the linked list.
 *
 * Return: The size of the list that was freed.
 *         The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	do
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
			break;
		}
	} while (*h);

	*h = NULL;

	return (len);
}
