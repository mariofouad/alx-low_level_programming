#include "list.h"
/**
 * list_len - number of elements
 * @h: list passed
 * Return number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
