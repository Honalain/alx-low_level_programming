#include <stdio.h>
/**
 * print_before_main - function that print statement before main is excecuted
 *
 * Return: 0
 */
void __attribute__((constructor)) print_before_main()
{

	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");

}
