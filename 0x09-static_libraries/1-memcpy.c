#include "main.h"
/**
 * _memcpy - copies memory with a same data byte
 * @dest: destination of the bytes
 * @src: source of the bytes
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ;  i < n ; i++)
	dest[i] = src[i];
return (dest);

}
