#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - entry point
 * @a: character input
 *
 * Description: a function that prints a chessboard
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (; i < 8; i++)
	{
		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
