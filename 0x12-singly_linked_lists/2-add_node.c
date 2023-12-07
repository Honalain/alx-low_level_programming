#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function to add node
 * @head: head of the list
 * @str: pointer to the length of the string
 *
 * Return: address of new element or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = (list_t *)malloc(sizeof(list_t));

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

	newnode->next = *head;

	*head = newnode;


	return (newnode);
}
