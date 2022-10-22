#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument variables
 * Description: a program that multiplies two numbers
 * Return: An integer
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc > 2)
	{
		printf("input first number: ");
		scanf("%d\n", &i);
		printf("input second number: ");
		scanf("%d\n", &j);

		mul = i * j;

		printf("The multiple of %d and %d is: %d\n", i, j, mul);
	}
}
