#include "lists.h"
/**
 * free_listint - free a list passed
 * @head: pointer to first element
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;

	while (head != NULL)
	{
		head = head->next;
		free(p);
		p = head;
	}
}
