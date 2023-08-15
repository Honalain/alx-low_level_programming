#include "main.h"
/**
 * print_alphabet_x10 - print alphabetsin lower case ten times
 * Return: indicate the end of the function
 */

void print_alphabet_x10(void)
{
int n;
char m;

for (n = 0 ; n < 10 ; n++)
{
for (m = 'a' ; m <= 'z'; m++)
_putchar(m);

_putchar('\n');
}
}
