#include "lists.h"
/**
 * add_nodeint - adds a new node at the beg
 * @head: passed pointer to head of the list
 * @n: value of the node to be added
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new ==  NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
