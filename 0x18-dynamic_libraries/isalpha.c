#include <unistd.h>
#include <stdio.h>
#include "main.h"

int _isalp(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
