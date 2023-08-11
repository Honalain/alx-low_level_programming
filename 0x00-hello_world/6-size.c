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
printf("Size of cha: %d byte(s) \n", a);
printf("Size of an int: %d byte(s) \n", a);
printf("Size of long int: %d byte(s) \n", d);
printf("Size of long long int: %d byte(s) \n", e);
printf("Size of float: %d byte(s) \n", c);
return (0);
}
