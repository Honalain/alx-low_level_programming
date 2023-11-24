#include<stdio.h>
#include<stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: pointer
 *
 */
char *malloc_checked(unsigned int b)
{
	char *out;

	out = malloc(b);
	if (out == NULL)
		exit(98);
	else
		return (out);
}
