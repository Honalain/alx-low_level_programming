#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that delete head node of the list
 * @head: pointer to the next node in the list
 *
 * Return: fuction return data and 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}
