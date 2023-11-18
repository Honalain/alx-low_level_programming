#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positve numbers
 * @argc: argument count
 * @argv: argumnet vetor
 *
 * Return: return 0 when there is character
 *
 */
int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			if (!isdigit(argv[i][j]))
			{
			printf("Error\n");
			return (1);

			}
		}
	add += atoi(argv[i]);
	}

	printf("%d\n", add);
	return (0);
}
