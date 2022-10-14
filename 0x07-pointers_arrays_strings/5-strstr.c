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
	int *i, *j;

	while (*haystack)
	{
		i = *haystack;
		j = *needle;
		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
		{
			return (i);
		}
		else
		{
			haystack = i + 1;
		}
	}
	return (NULL);
}
