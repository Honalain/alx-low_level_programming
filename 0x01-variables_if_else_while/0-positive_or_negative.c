#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of program
 * Description: is where we instruct computer to do what we want
 * Return: return zero
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
