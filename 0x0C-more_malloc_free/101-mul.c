#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _is_digit - checks if a number is only composed of digit.
 *@argc: number of arguments on the command line.
 *@argv: array containing the command-line arguments .
 * Return: Always 0.
 */
int _is_digit(int argc, char *argv[])
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (isdigit(argv[i][j]) == 0)
				return (1);
			j++;
		}
	}
	return (0);
}

/**
 * main - program that multiplies two numbers.
 *@argc: number of arguments on the command line.
 *@argv: array containing the command-line arguments .
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	else
	{
		if (_is_digit(argc, argv) == 1)
		{
			printf("Error\n");
			exit(98);
		}

		else
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			printf("%d\n", a * b);
		}

	}
	return (0);
}
