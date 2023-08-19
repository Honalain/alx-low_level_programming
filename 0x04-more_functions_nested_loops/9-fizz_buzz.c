#include<stdio.h>
/**
 * main - entry point of tne program
 * Return: return void neans no thing to return
 */

int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{

		if (num % 5 == 0)
			printf("%s", "Buzz");
		else if (num % 3 == 0)
			printf("%s", "Fizz");
		else if ((num % 5 == 0) && (num % 3 == 0))
			printf("%s", "FizzBuzz");
		else
		printf("%d ", num);

		if (num != 100)
			printf(" ");

	}
	printf("\n");
	return (0);
}
