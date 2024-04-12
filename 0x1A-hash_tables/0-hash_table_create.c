#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_t *hash_table_create -  function to create hash table
 * @size: the size of the array
 * Return: return a pointer to new created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;

	if (size == 0)
	{
		return (NULL);
	}



	newTable = calloc(1, sizeof(hash_node_t));

	if (newTable == NULL)
	{
		return (NULL);
	}
	newTable->size = size;
	newTable->array = calloc(size, sizeof(hash_node_t *));

	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}

	return (newTable);
}
