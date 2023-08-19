#include<stdio.h>
#include<math.h>
/**
 * main - program main function
 * Return:Always void value
 */
int main(void)
{
	long x, max;
	long num = 612852475143;
	double sqr = sqrt(num);

	for (x = 1 ; x <= sqr ; x++)
	{
		if (num % x == 0)
		{
			max = num / x;
	}

	}
printf("%ld\n", max);
return (0);
}
