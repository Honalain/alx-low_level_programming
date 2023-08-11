#include<stdio.h>
/**
 * main - main function of the c_program
 * Return: indicate compilation completion
 */
int main(void)
{
int a = sizeof(int);
int b = sizeof(char);
int c = sizeof(float);
printf("the size of int ,char and float is %d,%d and %d \n", a, b, c);
return (0);
}
