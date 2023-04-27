#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @p: pointer to list_t list to print
 *
 * Return: printed nodes number
 */
size_t print_list(const list_t *p)
{
	size_t s = 0;

	while (p)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
		s++;
	}

	return (s);
}
