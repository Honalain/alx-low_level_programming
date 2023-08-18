#include "main.h"
/**
 * print_diagonal - function that wi print diagonal for us
 * @n: function parameter
 * Return: it return void 0
 */
void print_diagonal(int n)
{
if (n <= 0)
	_putchar('\n');
	else
	{
	int i, l;

	for (i = 0 ; i < n ; i++)
	{

	for (l = 0 ; l <= i ; l++)

		_putchar(' ');
	_putchar ('\\');
	_putchar('\n');
	}

	}
}
