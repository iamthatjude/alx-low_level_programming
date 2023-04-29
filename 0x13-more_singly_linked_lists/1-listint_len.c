#include "lists.h"

/**
 * listint_len - Returns then number of elements in a list
 *
 * @h: singly linked list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
