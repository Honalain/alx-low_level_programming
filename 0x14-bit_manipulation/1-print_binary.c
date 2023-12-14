#include <stdio.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that print binary representation of a number
 * @n: binary represatation
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int bits;
	int size = sizeof(n) * 8;
	int leading = 1;
	unsigned long int mask;

	if (n == 0)
	{
		putchar ('0');
		return;
	}
	for (bits = size - 1; bits >= 0; bits--)
	{
		mask = 1UL << bits;

		if ((n & mask) && leading)
		{
			putchar ('1');
			leading = 0;
		}
		else if (leading && bits == 0)
		{
			putchar('0');
		}
		else if (!leading)
		{
			putchar((n & mask) ? '1' : '0');
		}

	}
}
