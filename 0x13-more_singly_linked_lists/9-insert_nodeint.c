#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at given index
 * @head: pointer passed
 * @idx: index
 * @n: value of new node
 * Return: adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 0;
	listint_t *p = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	while (p != NULL)
	{
		if (pos == idx - 1)
		{
			new->next = p->next;
			p->next = new;
			return (new);
		}
		p = p->next;
		pos++;
	}

	free(new);
	return (NULL);
}
