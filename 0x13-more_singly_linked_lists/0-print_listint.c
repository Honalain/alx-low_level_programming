#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function that print content of the linked list
 * @h: pointer to the head of the list
 *
 * Return: return number of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);

}
