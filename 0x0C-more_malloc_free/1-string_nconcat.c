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
	unsigned int i, j, l1, l2;

	l1 = strlen(*s1);
	l2 = strlen(*s2);

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			strncat(s1, s2, n);
		}
	}
}
