#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - entry point
 * putchar - print lowercase alphabets
 * Return: 0 if false and 1 if otherwise
 */

void print_alphabet(void)
{
	char i;


	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
