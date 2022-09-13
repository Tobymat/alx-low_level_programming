#include <stdio.h>

/**
 * main - entry point
 * putchar - prints all single digits of base 10
 * Return: 0 if false and 1 if otherwise
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		 putchar(i);
	}
	putchar('\n');
	return (0);
}
