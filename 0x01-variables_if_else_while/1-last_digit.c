#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/**
 * main - this main function of the program
 * Description: the source code in order to print the last digit
 * Return: this indicate the termination
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int last_digit = n % 10;
if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0", n, last_digit);
}
else
printf("Last number of %d is %d and is greater than 5\n", n, last_digit);
return (0);
}
