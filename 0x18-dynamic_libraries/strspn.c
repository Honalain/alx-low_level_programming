#include<stdio.h>
#include<unistd.h>
#include"main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	while (*s != '\0')
	{
		char * temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				count++;
				break;
			}
		temp++;
		}
	if (*temp == '\0')
	{
		break;
	}
		s++;
	}
	return count;
}
