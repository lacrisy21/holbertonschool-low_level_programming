#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry data
 * @argc: count arg
 * @argv: stores argv
 * Return: 1 if Error or 0 if success
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}

