#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first character
 * @s2: second character
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *st;
	char *nu = " ";
	unsigned int i, j, o, p,;

	i = j = o = p = 0;
	if (s1 == NULL)
		s1 = nu;
	if (s2 == NULL)
		s2 = nu;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j += 1;
	st = malloc((i + j) * sizeof(char));
	if (st == NULL)
		return (NULL);
	while (s1[o] != '\0')
	{
		st[o] = s1[o];
		o++;
	}
	while (s2[p] != '\0')
	{
		st[o] = s2[p];
		o++;
		p++;
	}
	st[o] = '\0';
	return (st);
}
