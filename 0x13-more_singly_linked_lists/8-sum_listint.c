#include "lists.h"

/**
 * sum_listint - This calculates the sum of all the data in a listint_t list
 * @head: first node on the linked list
 *
 * Return: Always 0 success if list is empty
 */

int sum_listint(listint_t *head)

{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}

	return (sum);
}
