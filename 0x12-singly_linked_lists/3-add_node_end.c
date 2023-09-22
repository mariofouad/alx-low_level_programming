#include "lists.h"
/**
 * add_node_end - add a new node at the end
 * @head: the head of passed list
 * @str: string to be added
 * Return: adress of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL || str == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (*head->next != NULL)
			*head = h->next;
		*head->next = new;
	}
	return (new);
}
