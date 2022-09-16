#include "main.h"

/**
 * print_triangle - function to print triangles
 * @size: size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j + 1 = 2; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
