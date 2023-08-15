#include <stdio.h>
#include <stdio.h>

/**
 * main - This is the main function of the program
 * Description: prints the lowercase alphabet (excluding q and e) and a newline
 * Return: This indicates the termination status of the program
 **/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)


if (letter != 'q' && letter != 'e')

putchar(letter);

putchar('\n');

return (0);
}
