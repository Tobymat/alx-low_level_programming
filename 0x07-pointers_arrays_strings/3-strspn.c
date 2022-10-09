#include "main.h"
#include <stdio.h>

/**
 * _strspn - entry point
 * @s: first character
 * @accept: second character
 * Description - a function thats gets the lenght of a prefix substring
 *
 * Return: number of bytes in the intial segement of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}
