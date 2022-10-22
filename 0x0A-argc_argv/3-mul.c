#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument variables
 * Description: a program that multiplies two numbers
 * Return: An integer
 */

int main(int argc, char *argv[])
{
	int count, i, j, result;

	count = i = j = result = 0;
	if (argc > 0)
	{
		while (count < argc)
		{
			if (argc == 3)
			{
				if (count == 1)
					i = atoi(argv[count]);
				if (count == 2)
					j = atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			result = (i * j);
			count++;
		}
		printf("%d\n", result);
	}
	return (0);
}
