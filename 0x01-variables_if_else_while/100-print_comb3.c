#include <stdio.h>

/**
 * main - entry point
 * putchar - prints all combinations of two digits
 * Return: 0 if false and 1 if otherwise
 */

int main(void)
{
	int i;
	int c;

	for (i = 48; i <= 56; i++)
	{
		for (c = 49; c <= 57; c++)
		{
			if (c > i)
			{
				putchar(i);
				putchar(c);
				if (i != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
