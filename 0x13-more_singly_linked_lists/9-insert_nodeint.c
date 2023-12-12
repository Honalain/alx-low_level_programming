#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - function that insert  node to a give position
 * @head: pointer to the head of the list
 * @idx: new node index
 * @n: node data
 * Return: return adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *newNode, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0 || *head == NULL)
	{
		newNode = (listint_t *)malloc(sizeof(listint_t));
		if (newNode == NULL)
		{
			return (NULL);
		}
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	current = *head;

	for (count = 0; count < idx - 1 && current->next != NULL; count++)
	{
		current = current->next;
	}
	if (count < idx - 1 || current == NULL)
	{
		return (NULL);
	}
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if  (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = current->next;
	current->next = newNode;
	return (newNode);
}
