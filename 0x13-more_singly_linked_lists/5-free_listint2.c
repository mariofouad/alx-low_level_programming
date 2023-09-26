#include "lists.h"
/**
 * free_listint2 - free a list passed
 * @head: pointer to first element
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
}
