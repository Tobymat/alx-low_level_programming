#include "main.h"

/**
 * print_line - prints line
 * @n: number of lines to print
 * Return: no return
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
