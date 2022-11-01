#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: number of arrays
 * @c: character input
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ch;

	if (size != 0)
		ch = malloc(sizeof(char));
	else
		return(NULL);
	if (ch == NULL)
		return (NULL);
	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	return (ch);
}
