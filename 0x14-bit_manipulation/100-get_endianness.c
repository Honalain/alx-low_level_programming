#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - function that check for indians
 *
 * Return: nothing
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endiancheck = (char *)&num;

	return ((*endiancheck == 1) ? 1 : 0);
}
