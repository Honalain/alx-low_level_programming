#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat -concatinating string
 * @s1: string one
 * @s2: string two
 * @n: number of bytes following s1
 *
 * Return: concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1leng = 0;
	unsigned int s2leng = 0;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1leng++;
	for (i = 0; s2[i] != '\0'; i++)
		s2leng++;
	out = malloc(sizeof(char) * (s1leng + n) + 1);
	if (out == NULL)
		return (NULL);
	if (n >= s2leng)
	{
		for (i = 0; s1[i] != '\0'; i++)
			out[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			out[s1leng + i] = s2[i];
		out[s1leng + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			out[i] = s1[i];
		for (i = 0; i < n; i++)
			out[s1leng + i] = s2[i];
		out[s1leng + i] = '\0';
	}

	return (out);

}
