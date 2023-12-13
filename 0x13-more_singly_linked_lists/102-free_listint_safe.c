#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the address of the head of the list
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tortoise = *h, *hare = *h, *temp;
	size_t nodecount = 0;

	while (hare != NULL && hare->next != NULL)
	{
		temp = tortoise;
		tortoise  = tortoise->next;
		hare = hare->next->next;

		if (hare == tortoise)
		{
			while (tortoise != hare)
			{
				temp = hare;
				hare = hare->next;
				nodecount++;
				free(temp);
			}
			nodecount++;
			free(hare);
			*h = NULL;
			return (nodecount);
		}

		free(temp);
		nodecount++;
	}
	while (tortoise != NULL)
	{
		temp = tortoise;
		tortoise = tortoise->next;
		nodecount++;
		free(temp);
	}
	*h = NULL;
	return (nodecount);
}
