#include "lists.h"
/**
 * get_nodeint_at_index - get value at index
 * @head: pointer passed
 * @index: index of the node
 * Return: the vakue of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	while (head != NULL)
	{
		if (index == pos)
			return (head);
		head = head->next;
		pos++;
	}
	return (NULL);
}
