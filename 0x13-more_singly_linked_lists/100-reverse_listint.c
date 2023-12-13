#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - function that reverse linked list
 * @head: pointer to the head of the linked list
 *
 * Return: value in the rest node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *current = *head;

	if (current != NULL || *head == NULL)
	{
		return(0);
	}

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
	return(0);
}
