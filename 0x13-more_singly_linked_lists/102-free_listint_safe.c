#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the address of the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t nodes = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current != NULL)
{
nodes++;
if (current->next >= current)
{
temp = current;
current = current->next;
free(temp);
break;
}
temp = current;
current = current->next;
free(temp);
}
*h = NULL;

return (nodes);
}

