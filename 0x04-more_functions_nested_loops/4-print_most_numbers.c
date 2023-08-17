#include "main.h"
/**
 * print_most_numbers - function to print all number btn 1 and 9 except 2&
 * Return: void no number
 */

void print_most_numbers(void)
{
	int j;

	for (j = 0 ; j <= 9 ; j++)

	{
		if (j != 2 && j != 4)
			_putchar(j + '0');

	}
	_putchar('\n');
}
