#include "lists.h"
/**
 * listint_len - Returns num of elements
 * @h: list passed
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
