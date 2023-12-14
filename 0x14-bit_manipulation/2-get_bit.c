#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - function that return value of bit at given index
 * @index: index where required value is located
 * @n: binary number
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue = -1;
	unsigned int size = sizeof(n) * 8;
	unsigned long int mask;

	if (index < size)
	{
		mask = 1UL << index;
		bitvalue = (n & mask) ? 1 : 0;
	}
	return (bitvalue);
}
