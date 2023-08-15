#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the main function of the program
 * Description: This source code prints the lowercase alphabet and upper
 * Return: This indicates the termination status of the program
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
