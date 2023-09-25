#include "lists.h"
/**
 * sum_listint - sum of node values
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
