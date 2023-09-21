#include "lists.h"
/**
 * print_lists - print all data
 * @h: passed list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	unsigned int i;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodes = nodes + 1;
		h = h->next;
	}
	return (nodes);
}
