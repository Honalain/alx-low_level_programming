#include "main.h"
/**
 * _strchr - fills memory with a constant byte
 * @s: string
 * @c: pointer to the first occurrence
 * Return: pointer to c
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0 ; s[index] >= '\0' ; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
