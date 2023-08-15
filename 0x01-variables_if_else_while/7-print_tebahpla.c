#include <stdio.h>

/**
 * main - This is the main function of the program
 * Description: code prints the lowercase alphabet in reverse
 * Return: This indicates the termination status of the program
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n'); /* Print newline character*/

return (0);
}
