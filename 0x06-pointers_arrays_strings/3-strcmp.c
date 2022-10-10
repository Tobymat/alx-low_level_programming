#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: first character
 * @s2: second character
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
	}
	return (0);
}
