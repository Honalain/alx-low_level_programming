#include <stdio.h>

/**
 * main - This is the main function of the program
 * Description: code prints single-digit numbers from 0 to 9 and a newline
 * Return: This indicates the termination status of the program
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)

putchar(digit + '0');

putchar('\n');
return (0);
}
