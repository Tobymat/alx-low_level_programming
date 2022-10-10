#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry point
 * @s: first character
 * @accept: second character
 * Description: a function that searches a string for
 * any of a set of bytes
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	k = i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for(j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= k)
				{
					k = j;
					l = 1;
				}
			}
		}
	}
	if (l == 1)
	{
		return (&s[k]);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
