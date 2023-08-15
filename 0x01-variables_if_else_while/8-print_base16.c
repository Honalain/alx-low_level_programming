#include <stdio.h>

/**
 * main - This is the main function of the program
 * Description:prints numbers of base 16 in lowercase
 * Return: This indicates the termination status of the program
 */
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}

putchar('\n'); /* Print newline character*/
return (0);
}
