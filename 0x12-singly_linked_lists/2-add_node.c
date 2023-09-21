#include "lists.h"
/**
 * add_node - add nodes at the begining
 * @head; start of the list
 * @str: value in list
 * Return: thr new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode->str = strdup(str);
	newnode->next = head;
	head = newnode;

	return (head);
}
