size_t list_len(const list_t *h)
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
