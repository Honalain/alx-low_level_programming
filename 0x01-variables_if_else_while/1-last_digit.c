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
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

if (last_digit > 5)
{
printf("Last digit of %d is %d and is grater than 5", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0", n, last_digit);
}
else if (last_digit < 6 && last_digit != 0)
printf("Last number of %d is %d and less than 6 and not 0", n, last_digit);

printf("\n");

return (0);
}
