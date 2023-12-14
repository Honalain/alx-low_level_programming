#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - function that set bit to given index to 1
 * @n: binary number to flip its certain bit
 * @index: index at which bit will be set to 1
 *
 * Return: -1 if there is error or 1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n) * 8;

	if (index < size)
	{
		*n |= (1UL << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
