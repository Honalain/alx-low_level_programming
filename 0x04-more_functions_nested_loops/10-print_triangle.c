#include "main.h"
/**
 * print_triangle - function to print triangle
 * @size: size of the square of triangle
 * Return: return voiud value
 */
void print_triangle(int size)
{
	int k, z, a;

	if (size <= 0)
		_putchar('\n');
	else
	{

		for (k = 0 ; k < size ; k++)
		{
			for (z = size - k ; z > 1 ; z--)
			{
				_putchar(32);
			}


		for (a = 0 ; a <= k ; a++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

	}


}
