#include "main.h"

/**
 * print_diagonal - function to print diagonal
 * @n: number of times
 * Return: no return
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
