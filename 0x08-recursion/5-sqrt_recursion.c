#include "math.h"
#include "main.h"
#include <stdio.h>

/**
 * square_root - entry point
 * @i: first integer
 * @j: second integer
 * Description: a function that gets the square root of an integer
 * Return: the square root of a number
 */

int square_root(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (j);
	}
	return (square_root(i, j + 1));
}

/**
 * _sqrt_recursion - entry point
 * @n: integer input
 * Description: a function that returns square root of a number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 1));
}
