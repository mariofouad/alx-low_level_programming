#include "lists.h"
/**
 * pop_listint - deletes the head
 * @head: passed pointer
 * Return: Value of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int value;

	if (*head == NULL)
		return (0);
	p = *head;
	value = p->n;

	*head = (*head)->next;
	free(p);

	return (value);
}
