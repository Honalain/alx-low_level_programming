#include "main.h"
/**
 * print_line - function to draw straight line in terminal
 * @n: function parameter
 * Return: nothing it return as it is void
 */

void print_line(int n)
{
if (n <= 0)
	_putchar('\n');
else

{
	int k;

	for (k = 1 ; k <= n ; k++)
		_putchar('_');
	_putchar('\n');
}

}
