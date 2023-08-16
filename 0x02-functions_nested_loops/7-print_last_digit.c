#include"main.h"
/**
 * print_last_digit - function to print last digit of number
 * @k: function parameter passed
 * Return: j character value
 */
int print_last_digit(int k)
{
int j;
j = k % 10;
if (j < 0)
j = -j;
_putchar(j + '0');
return (j);


}
