#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 * @head: First node in the linked list.
 *
 * Return: Resulting sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	for (temp = head; temp; temp = temp->next)
	{
		sum += temp->n;
	}

	return (sum);
}
