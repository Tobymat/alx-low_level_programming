#include <stdio.h>

/**
 * main - entry point
 * putchar - prints combinations of single digits
 * Return: 0 if false and 1 if otherwise
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
