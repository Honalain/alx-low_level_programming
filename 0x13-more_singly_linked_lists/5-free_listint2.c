#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function to free list and set head to NULL
 * @head: pointer to the next node in the list
 *
 * Return: nothing it return
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head  == NULL || *head == NULL)
	{
		return;
	}


	while (current != NULL)
	{
		current = *head;
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}
