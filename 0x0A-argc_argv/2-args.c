#include <stdio.h>
/**
 *main - entry data
 *@argc: counts arg
 *@argv: cointains arg
 *Return: cero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

return (0);
}
