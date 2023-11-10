#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: head
 * @index: idx
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t1;
	dlistint_t *t2;
	unsigned int i;

	t1 = *head;

	if (t1 != NULL)
		while (t1->prev != NULL)
			t1 = t1->prev;

	i = 0;

	while (t1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = t1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				t2->next = t1->next;

				if (t1->next != NULL)
					t1->next->prev = t2;
			}

			free(t1);
			return (1);
		}
		t2 = t1;
		t1 = t1->next;
		i++;
	}

	return (-1);
}
