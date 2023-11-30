#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - this is the fuction to add all number of the argument passed
 * @n: this args idebtifying the number of function parameter
 * Return: return 0 if argument is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);

	}

	va_end(args);

	return (sum);

}
