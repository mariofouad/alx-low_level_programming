#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 * @head: passed pointer
 * @n: value of new node
 * Return: pointer to new added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	return (*head);
}
