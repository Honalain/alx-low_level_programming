#include "main.h"
/**
 * swap_int - function name to values of two entegers
 * @a:int pointer varialbe
 * @b:int pointer variable
 * return: always nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

