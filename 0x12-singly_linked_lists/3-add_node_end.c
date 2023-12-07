#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - function that add node to the end of the linked list
 * @head: return number of string charcter in the node
 * @str: argument data pointer to hte function
 * Return: return address of the new element or null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = (list_t *) malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = (unsigned int)strlen(str);

	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
