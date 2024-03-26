#include<stdio.h>
#include<unistd.h>
#include "main.h"
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return start;
}
