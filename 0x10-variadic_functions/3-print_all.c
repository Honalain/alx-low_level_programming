#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that print anything
 * @format: list of the types of argument passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (i > 0)
		{
			printf(", ");
		}
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 'i':
		printf("%d", va_arg(args, int));
		break;
	case 'f':
		printf("%f", va_arg(args, double));
		break;
	case 's':
		str = va_arg(args, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		break;
	}
	i++;
	}
	va_end(args);
	printf("\n");
}
