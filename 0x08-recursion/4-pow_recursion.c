#include "main.h"
#include "math.h"
#include <stdio.h>

/**
 * _pow_recursion - entry point
 * @x: first integer
 * @y: second integer
 * Description: a function that returns the value of x to the power of y
 * Return: the value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
