#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - function that add node to the linked list
 * @head: points ot int next node in the list
 * @n: give access to the data in the node
 *
 * Return: return adress of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);

}
