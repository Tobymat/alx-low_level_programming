#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: first integer
 * @n: second integer
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
