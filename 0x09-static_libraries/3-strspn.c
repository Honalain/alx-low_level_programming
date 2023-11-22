#include "main.h"
/**
 * _strspn - get the lenght of a prefix substring
 * @accept: string to search
 * @s: string to search
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

for (i = 0 ; s[i] != '\0' ; i++)
{

for (j = 0 ; s[i] != accept[j] ; j++)
	{
if (accept[j] == '\0')
return (i);
	}
}
return (0);
}
