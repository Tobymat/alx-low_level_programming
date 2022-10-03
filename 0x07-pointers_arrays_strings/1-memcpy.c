#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first memory
 * @src: second memory
 * @n: the size if the memory to copy
 *
 * Return: pointer to dest memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char **dest1 = *dest;

	while (i < n)
	{
		dest[i] = src[i];
	}
	i++;
	return(dest1);
}
