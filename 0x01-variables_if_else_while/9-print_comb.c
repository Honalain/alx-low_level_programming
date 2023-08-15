#include <stdio.h>

/**
 * main - This is the main function of the program
 * Description: prints possible combinations of single-digit numbers
 * Return: This indicates the termination status of the program
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');

if (num != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n'); /* Print newline character*/
return (0);
}
