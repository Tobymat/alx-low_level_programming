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
	int i, j, n, t;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			for (n = 0; n < accept[j]; n++)
			{
				if (s[i] == n)
				{
					return (s);
					s++;
				}
			}
			if (!s[i] == n)
			{
				return (NULL);
			}
		}
	}
}
