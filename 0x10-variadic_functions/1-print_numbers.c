#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers
 * @separator: string to be printed between numbers
 * @n: number of interger passed to function
 * Return: nothing to return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));

		if (separator == NULL)
			return;

		printf("%s", separator);


	
	}

	va_end(arg);
	printf("\n");
}
