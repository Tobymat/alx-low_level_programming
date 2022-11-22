#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *st;
	int i, j;
	int i = 0;

	if (min > max)
		return (NULL);
	j = (max - min);
	st = malloc(sizeof(*st) * (j + 1));
	if (st == NULL)
		return (NULL);
	while (i <= j)
	{
		st[i] = min;
		i++;
		min++;
	}
	return (st);
}
