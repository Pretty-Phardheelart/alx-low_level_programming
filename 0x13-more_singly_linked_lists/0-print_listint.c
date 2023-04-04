#include <stdio.h>
#include "lists.h"

/**
 * print_listint - This is a function that prints all the
 * elements of a listint_t list
 * @l: linked list of type listint_t to be printed
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *l)

{
	size_t num = 0;

	while (l)
	{
	printf("%d\n", l->n);
	num++;
	l = l->next;
	}

	return (num);
}
