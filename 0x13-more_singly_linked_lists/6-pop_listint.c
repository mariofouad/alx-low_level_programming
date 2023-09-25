#include "lists.h"
/**
 * pop_listint - deletes the head
 * @head: passed pointer
 * Return: Value of the head
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	listint_t *p = *head;
	int value = p->n

	* head = (*head)->next;
	free(p);
	return (value);
}
