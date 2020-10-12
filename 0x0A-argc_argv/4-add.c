#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry data
 * @argc: count arg
 * @argv: stores argv
 * Return: 1 if Error or 0 if success
 */
int main(int argc, char *argv[])
{
	int add;
	int sum;
	int c, i;

	sum = 0;
	
	for (c = 1; c < argc; c++)
	{
		for (i = 0; argv[c][i]; i++)
		{
			if (!isdigit(argv[c][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
			add = atoi(argv[c]);
			sum = sum + add;
	}
	printf("%d\n", sum);
	return (0);
}
