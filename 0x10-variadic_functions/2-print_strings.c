#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - Function that print string
 * @separator: string to be printed
 * @n: number of string passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		const char *string = va_arg(arg, const char *);

		if (string == NULL)
			printf("(nil)");
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}

	}

	va_end(arg);
	printf("\n");
}
