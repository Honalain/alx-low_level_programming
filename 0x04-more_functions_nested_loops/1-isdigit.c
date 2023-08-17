# include "main.h"
/**
 * _isdigit - function that checks for 0 to 9
 * @c: function parameters
 * Return: 1 if it is in range and 0 if it is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
