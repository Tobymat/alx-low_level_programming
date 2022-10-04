#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string
 * @s: character to check
 * Description: encodes a string using rot13
 * Return: Always 0
 */

char *rot13(char *s)
{
	int tmp, i;
	char *n= abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ;
	char *r= nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM;

	for (n = 1; n <= 52; n++)
	{
		for (r = 1; r <= 52; r++)
		{
			if (*s[i])
			{
				tmp = *n;
				*n = *r;
				*r = tmp;
			}
		}
	}
	return (s);
}
