#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2d array
 * @width: the width
 * @height: the height
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j, x, y;

	i = j = x = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	/* using typecasting (int *) to dereference values */
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (f = 0; y < i; y++)
				free(ar[y]);
			free(ar);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (x = 0; x < width; x++)
			ar[j][x] = 0;
	}
	return (arr);
}
