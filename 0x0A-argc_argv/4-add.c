#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 *@argc: number of arguments on the command line.
 *@argv: array containing the command-line arguments .
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;
	int flag = 1;

	if (argc < 2)
		printf("%d\n", sum);

	else
	{
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				flag = 0;
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
		if (flag == 1)
		printf("%d\n", sum);
	}

	return (0);
}
