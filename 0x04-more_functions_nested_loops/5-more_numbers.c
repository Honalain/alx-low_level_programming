#include "main.h"
/**
 * more_numbers - function to print number from 0 -14 ten times
 * Return: no thing function return
 */

void more_numbers(void)
{
int k;
int m;
for (k = 0 ; k < 10 ; k++)
{
	for (m = 0 ; m <= 14 ; m++)
	{
		if (m > 9)
			_putchar(m / 10 + '0');

		_putchar(m % 10 + '0');
	}
	_putchar('\n');

}
}
