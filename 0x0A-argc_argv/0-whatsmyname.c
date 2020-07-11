#include <stdio.h>
/**
 * main - entry data
 *@argc: counts arg
 *@argv: contains the arg
 * Return: cero
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
