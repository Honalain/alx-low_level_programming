#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - function that convert a binary number to an unsigned int
 * @b: pointer to the string
 *
 * Return: Function return converted number 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if  (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b - '0');
		b++;
	}

	return (num);
}
