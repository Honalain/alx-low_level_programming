#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - Function that set the value of a biot to 0 at given index
 * @n: number to clear bit in
 * @index: index to which bit must be clear
 *
 * Return:ui if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n) * 8;

	if (index < size)
	{
		*n &= ~(1UL << index);
		return (1);
	}
	else
	{
		return (-1);
	}

}
