#include "main.h"
#include<stdio.h>
/**
 * print_number - printing integer
 * @n: function parameter
 * Return: retun void value
 */
void print_number(int n)
{

	unsigned int j = n;

	if (n < 0)
	{
		n *= -1;
		j = n;
		_putchar('-');
	}
	j /= 10;
	if (j != 0)
		print_number(j);

	_putchar((unsigned int) n % 10 + '0');
}
