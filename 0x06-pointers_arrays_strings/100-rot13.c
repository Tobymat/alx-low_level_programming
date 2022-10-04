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
	int i;
	char *n = abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ;
	char *r = nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM;

	for (n = 0; n != '\0'; n++)
	{
		for (r = 0; r != '\0'; r++)
		{
			if (*s[0])
			{
				i = n;
				*n = *r;
				*r = i;
			}
		}
	}
	return (0);
}
