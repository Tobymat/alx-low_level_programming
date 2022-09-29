#include "main.h"

/**
 * rot13 - function that rotates
 * @str: input string
 * @s: first characters
 * @s1: second characters
 * Description: encodes a string using rot13
 * Return: Always (0)
 */

char *rot13(char *str)
{
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[j] == str[i])
			{
				str[i] = s1[j];
			}
		}
	}
	return (str);
}
