#include "main.h"
/**
 *print_rev - funmction name
 *@s: string reversed to be
 *Return: nothing as void
 */
void print_rev(char *s)
{
int i;
char j;
int count = 0;

for (i = 0 ; s[i] != '\0' ; i++)

for (i = 0 ; i < count / 2 ; i++)
	{
j = s[i];
s[i] = s[count - 1 - i];
s[count - 1 - i] = j;
	}
}
