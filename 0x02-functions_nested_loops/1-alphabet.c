#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * putchar - print lowercase alphabets
 * Return: 0 if false and 1 if otherwise
 */

int main(void)
{
	print_alphabet i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
