#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first character
 * @s2: second character
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *st;
	char *nu = "";
	unsigned int i, j, s, p,;

	i = j = s = p = 0;
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
	while (s1[s] != '\0')
	{
		st[s] = s1[s];
		s++;
	}
	while (s2[p] != '\0')
	{
		st[s] = s2[p];
		s++;
		p++;
	}
	st[s] = '\0';
	return (st);
}
