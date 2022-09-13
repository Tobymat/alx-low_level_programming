#include <stdio.h>

/**
 * main - entry point
 * putchar - prints lowercase numbers in base 16
 * Return: 0 if false and 1 if otherwise
 */

int main(void)
{
	int i;
	char gh;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (gh = 'a'; gh <= 'f'; gh++)
	{
		putchar(gh);
	}
	putchar('\n');
	return (0);
}
