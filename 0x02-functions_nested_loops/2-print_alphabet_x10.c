#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * putchar - prints 10x the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			putchar(i);
		}
	}
	putchar('\n');
}
