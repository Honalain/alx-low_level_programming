#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that return sum of all data in the linked list
 * @head: pointer to the next node in the list
 *
 * Return: Return sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
