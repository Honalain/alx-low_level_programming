#include "main.h"
/**
 *_islower - function that checks for lower case
 * @c: character to be checked
 * Return:it will return 1 for lower case and 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')

	return (1);
else
	return (0);

}
