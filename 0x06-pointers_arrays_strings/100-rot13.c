#include "main.h"

/**
 * rot13 - function that encodes a string
 * @s: character to check
 * Description: encodes a string using rot13
 * Return: Always 0
 */

char *rot13(char *s)
{
	int t, i;
	char n[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (t = 0; t <= 51; t++)
		{
			if (n[t] == s[i])
			{
				s[i] = r[t];
			}
		}
	}
	return (s);
}
