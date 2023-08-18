#include "main.h"
/**
 * print_square - this function print square figure of #
 * @size: function parameter
 * Return: indicate fuction return 0
 *
 */
void print_square(int size)
{
	int k;
	int m;

	if (size <= 0)

	_putchar('\n');

	else
	{
		for (k = 1 ; k <= size; k++)
		{
			for (m = 1 ; m <= size ; m++)
				_putchar('#');
			_putchar('\n');
		}
	}

}
