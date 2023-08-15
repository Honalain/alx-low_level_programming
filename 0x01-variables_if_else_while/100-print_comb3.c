#include <stdio.h>

/**
 * main - This is the main function of the program
 * Description: possible different combinations of two digits
 * Return: This indicates the termination status of the program
 */
int main(void)
{
int firstDigit, secondDigit;
for (firstDigit = 0; firstDigit <= 8; firstDigit++)
{
for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');

if (firstDigit != 8 || secondDigit != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n'); /* Print newline character*/
return (0);
}
