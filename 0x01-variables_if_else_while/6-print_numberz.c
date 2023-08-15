#include<stdio.h>
#include<stdlib.h>
/**
 * main - main program entry
 * Description: printing all single character of base 10
 * Return: completion successful return 0
 */
int main(void)

{

int i;
for (i = 0 ; i < 10 ; i++)

putchar(i + '0');

putchar('\n');

return (0);

}
