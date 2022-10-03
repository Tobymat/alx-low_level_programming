#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: integer
 * @i: first integer
 * @len: second integer
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	i = 0;

	while (dest[len] = '\0')
	{
		++len;
	}
	while (src[i] != '0' && i < n)
	{
		dest[len] = src[i];
		++i;
		++len;
	} dest[len] = '\0';
	return (dest);
}
