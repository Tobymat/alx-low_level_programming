#include "main.h"

/**
 * print_line - prints line
 * @n: number of lines to print
 * Return: no return
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
