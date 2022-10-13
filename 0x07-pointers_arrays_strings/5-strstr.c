#include "main.h"
#include <stdio.h>

/**
 * _strstr - entry point
 * @haystack: first character
 * @needle: second character
 * Description: a function that finds the first occurence of a substring
 * Return: a pointer to the begining of the located string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (j == i)
				return (i);
			else
				return (j);
		}
	}
}
