#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that print  all elements of list_t
 * @h: pointed to next node
 * Return: node_count
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}

