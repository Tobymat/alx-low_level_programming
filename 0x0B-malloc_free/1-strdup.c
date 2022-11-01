#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function thats points a new memory space
 * @str: a pointer
 *
 * Return: a NULL
 */

char *_strdup(char *str)
{
	char *st;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	i += 1;
	st = malloc(i * sizeof(char));
	if (st == NULL)
		return (NULL);
	while (j < i)
	{
		st[j] = str[j];
		j += 1;
	}
	return (st);
}
