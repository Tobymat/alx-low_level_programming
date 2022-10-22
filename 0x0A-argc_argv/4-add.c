#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * check - checks if a given char is number or not
 * @i: input char
 * Return: Always 0
 */

int check(char *i)
{
	int j, num, len;

	j = num = 0;
	len = strlen(i);
	while (j < len)
	{
		if (i[j] < '0' || i[j] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (i[j] - '0');
		j++;
	}
	return (num);
}

/**
 * main - entry point
 * @argc: number of variables
 * @argv: inputted variables
 * Description: a program that adds two variables
 * Result: An integer
 */

int main(int argc, char *argv[])
{
	int i, num, result;

	result = 0;
	for (i = 1; i < argc; i++)
	{
		num = check(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
