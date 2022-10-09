#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry point
 * @s: first character
 * @accpet: second character
 * Description: a function that searches a string for
 * any of a set of bytes
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s);
			else
				return (NULL);
		}
	}
}
