#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 * @a: first integer
 * @size: second integer
 * Description: a function that prints the sum of two diagonals
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, n, m;

	n = 0;
	m = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				n += *((a + i * size) + j);
			}
			if ((i + j) == (size - 1))
			{
				m += *((a + i * size) + j);
			}
		}
	}
	printf("%i, %i\n", n, m);
}
