#include "lists.h"
/**
 * list_len - function that print length of the list
 * @h: function argument
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);

}
