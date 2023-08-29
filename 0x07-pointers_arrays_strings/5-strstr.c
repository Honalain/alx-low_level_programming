#include "main.h"
/**
 * _strstr - function that locate sustring 
 * @haystack: input pointer parameter 1
 * @needle: input pointer parameter 2
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
	l++;
	p++;
}

		if (*p == '\0')
	return (haystack);
}
	return (0);
}

