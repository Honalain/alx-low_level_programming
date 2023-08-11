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
int d = sizeof(long int);
int e = sizeof(long long int);
printf("the size of int is  %d bytes \n", a);
printf("the size of char is  %d bytes \n", b);
printf("the size of float is  %d bytes \n", c);
printf("the size of long int is  %d bytes \n", d);
printf("the size of long long int is  %d bytes \n", e);
return (0);
}
