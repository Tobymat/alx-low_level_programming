#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: character to print
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int i = 0, j;

	while (s[j++])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
