#include <stdio.h>
/**
   * main - Print numbers separeted with comas
    *
     * Return: Always 0 (Success)
      */
int main(void)

{
	int h;

	for (h = 0; h <= 9; h++)
	{
		putchar(h + 48);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
