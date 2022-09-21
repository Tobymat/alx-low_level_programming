#include "main.h"

/**
 * strcmp - function that compares two strings
 * @s1: first character
 * @s2: second character
 * @i: first integer
 * @j: second integer
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] > s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
		else if (s1[i] < s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
	}
	return (0);
}
