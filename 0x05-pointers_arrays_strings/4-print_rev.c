#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: character to print
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int i, j, k;

	j = 0;
	i = 0;

	for (k = 0; s[k] != '\0'; ++k)
	{
		j = i;
	}
	for (; j >= i; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
