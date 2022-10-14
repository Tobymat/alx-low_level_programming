#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string
 * @s: character to print
 * Description: a string thats prints in reverse
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
