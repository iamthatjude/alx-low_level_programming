#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 *
 * @h: singly linked list
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;

		elements++;
	}

	return (elements);
}
