#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits -function that return number of bit needed to flip to get other
 *
 * @n: number where bit will be flipped
 * @m: number of bit to need to be flipped
 *
 * Return: number of need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
