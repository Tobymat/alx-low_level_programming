#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first character
 * @s2: second character
 * @n: number of characters to concate
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	char *nul = "";
	unsigned int x, y;

	x = y = 0;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	y++;
	if (n >= y)
		n = y;
	st = malloc(sizeof(*st) * n + (x + 1));
	if (st == NULL)
		return (NULL);
	x = 0;
	while (s1[x] != '\0')
	{
		st[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		st[x] = s2[y];
		x++;
		y++;
	}
	st[x] = '\0';
	return (st);
}
