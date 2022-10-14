#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Entry point
 * @s: character to check
 * Description: a function that prints a string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
