#include "main.h"
#include <stdio.h>

/**
 * s_len - gets string lenght
 * @s: input string
 * Description: function that gets the lenght of a string
 * Return: string lenght
 */

int s_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + s_len(s + 1));
}

/**
 * check_palindrome - checks string
 * @i: input character
 * @j: an interator
 * @len: string length
 * Description: checking if string is a palindrome
 * Return: the string
 */

int check_palindrome(char *i, int j, int len)
{
	if (i[j] == i[len / 2])
	{
		return (1);
	}
	if (i[j] == i[len - j - 1])
	{
		return (check_palindrome(i, len, j + 1));
	}
	return (0);
}

/**
 * is_palindrome - print palindrome
 * @s: input string
 * Description: returns 1 if string is palindrome
 * Return: string input
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = s_len(s);

	if (!s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
