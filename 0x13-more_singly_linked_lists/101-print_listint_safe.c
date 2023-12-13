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
	const listint_t *current = head;
	size_t nodeCount = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodeCount++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);

			exit(98);
		}
		current = current->next;
	}
	return (nodeCount);
}
