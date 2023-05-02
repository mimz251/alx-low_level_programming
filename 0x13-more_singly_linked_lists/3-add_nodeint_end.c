#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - adds linked list a node at the end
* @head: pointer to the first element
* @n: inserted data in the new element
* Return: pointer to the new node,null if false
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
{
	*head = new;
	return (new);
}

	while (temp->next)

	temp = temp->next;
	temp->next = new;

	return (new);
}
