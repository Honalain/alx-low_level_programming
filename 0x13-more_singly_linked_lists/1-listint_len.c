#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that count number of element in the linked list
 * @h: point to the next node in the linked list
 * Return: return number element in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;

	}
	return (count);
}
