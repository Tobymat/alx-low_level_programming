#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments
 * @ac: integer value
 * @av: character value
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *ar, *str;
	int i, j, x;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while(av[i][j] != '\0')
		{
			j++;
			x++;
		}
		x++;
	}
	x += 1;
	ar = malloc(x * sizeof(char));
	if (ar == NULL)
		return (NULL);
	str = ar;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*ar = av[i][j];
			j++;
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (str);
}
