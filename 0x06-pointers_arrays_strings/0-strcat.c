#include "main.h"

/**
 * strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}

	for (i = 0; src[i] != '\0'; ++i, ++len)
	{
		dest[len] = src[i];
	}

	dest[len] = '\0';
	return (dest);
}
