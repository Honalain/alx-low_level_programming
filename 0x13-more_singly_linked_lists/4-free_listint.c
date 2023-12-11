#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - function to free list
 * @head: pointer to the next node in the list
 *
 * Return: nothing to return;
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current);
	}
}
