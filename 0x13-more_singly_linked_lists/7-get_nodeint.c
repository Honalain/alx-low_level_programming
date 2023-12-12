#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that return index of nth of linked list
 * @head: pointer to the next node in the linked list
 * @index: return index of each node
 *
 * Return: null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;


	for (count = 0; count < index && head != NULL; count++)
	{

		head = head->next;

	}
		if (count < index || head == NULL)
		{
			return (NULL);
		}

	return (head);

}
