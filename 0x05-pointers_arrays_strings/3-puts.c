#include "main.h"
/**
 * _puts - function that print a string followed by new line
 * @str: pointer parameters value
 * Return: always nothing to return
 */
void _puts(char *str)
{
	int i;

for (i = 0; str[i] != '\0' ; i++)
	_putchar(str[i]);
_putchar('\n');

}
