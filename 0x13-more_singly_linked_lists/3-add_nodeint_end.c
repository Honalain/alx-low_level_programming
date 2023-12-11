#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint_end - function that add node at the end of the list
 * @head: pointer to the next node in the list
 * @n: used to access data of every node in the list
 *
 * Return: return adress of the new node added to the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{

		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
