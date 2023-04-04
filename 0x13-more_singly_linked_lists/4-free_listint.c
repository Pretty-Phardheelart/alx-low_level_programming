#include "lists.h"

/**
 * free_listint - This function is designed to free linked list
 * @head: listint_t list to be freed.
 * return: 0
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
