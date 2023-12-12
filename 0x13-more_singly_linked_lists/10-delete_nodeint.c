#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that delete node at any index
 * @index: index where node is to be deleted
 * @head: pointer to the next node in the list
 *
 * Return: 1 if deletion succeeded and-1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;

	for (i = 0; i < index - 1 && current->next != NULL; i++)
	{
		current = current->next;
	}
	if (i < index - 1 || current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
