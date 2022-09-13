#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * putchar - prints 10x the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i =10;
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j * i);
	}
	putchar('\n');
}
