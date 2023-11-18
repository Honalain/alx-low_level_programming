#include<stdio.h>
#include<stdlib.h>
/**
 * main - the main progran with command line argument
 * @argc: argument count
 * @argv:argument vector
 *
 * Return: return nothing
 */
int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int j = atoi(argv[2]);
	int product = n * j;

	if (argc != 3)
		{
		printf("Error\n");
		return (1);
		}

	printf("%d\n", product);

	return (0);

}
