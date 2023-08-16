#include<stdio.h>
#include "main.h"
/**
 * main - Determine if number is positive or negativeor zero
 * @i: passed parameter
 * description: - function to check if number is zero
 * positive_or_negative: function to check if number is zero
 * Return: termination success 0 return
 */
void positive_or_negative(int i)
{
if (i < 0)
{
	printf("%d is negative\n", i);

}
else if (i > 0)
{
	printf("%d is positive\n", i);

}

else
{
	printf("%d is zero \n", i);

}

}
