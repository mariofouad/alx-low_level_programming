#include "lists.h"
/**
 * print_lists - print all data
 * @h: passed list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;
	unsigned int i;

	while (h-> != NULL)
	{
		for (i = 0; i < h->len; i++)
		{
			printf("%s", h->str[i];
		}
		h = h->next;
	}
	return nodes;
}
