#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of variables
 * @argv: inputted variables
 * Description: a program that adds two variables
 * Result: An integer
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
				if (count == 0)
					printf("0\n");
				else if (count == 1)
					i = atoi(argv[count]);
				else if (count == 2)
					j = atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			result = (i + j);
			count++;
		}
		printf("%d\n", result);
	}
	return (0);
}
