#include <stdio.h>

/**
 * main - entry point
 * putchar - prints all single digits of base 10
 * Return: 0 if false and 1 if otherwise
 */

int main(void)
{
	int ws;

	for (ws = 0; ws < 10; ws++)
	{
		putchar(ws);
	}
	putchar('\n');
	return (0);
}
