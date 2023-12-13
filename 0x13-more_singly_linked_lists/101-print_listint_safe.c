#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - function that print listint_t linked list
 * @head: pointer to next node in the list
 *
 *Return: number of node int hte list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t nodeCount = 0;

	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		nodeCount++;
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (hare == tortoise)
		{
			printf("-> [%p] %d\n", (void *)hare->next, hare->next->n);
			exit(98);
		}
	}

	{
		 printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		 nodeCount++;
		 tortoise = tortoise->next;
	}

	return (nodeCount);
}
