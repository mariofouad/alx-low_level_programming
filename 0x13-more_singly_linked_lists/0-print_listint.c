#include "list.h"
/**
 * print_listint - prints all elements
 * @h: list passed
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
