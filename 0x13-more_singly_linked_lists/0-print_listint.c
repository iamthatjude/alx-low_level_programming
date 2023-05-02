#include "lists.h"

/**
 * print_listint - Prints all the elements of a list
 *
 * @h: head of a list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}

	return (elements);
}
