#include "main."

/**
 * _memset - function to fill memory
 * @s: character to check
 * @b: second character
 * @n: integers to fill
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
