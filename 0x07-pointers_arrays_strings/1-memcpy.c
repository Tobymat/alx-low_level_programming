#include "main.h"

/**
 * _memcpy - function to copy memory
 * @dest: first character
 * @src: second character
 * @n: number of times to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
