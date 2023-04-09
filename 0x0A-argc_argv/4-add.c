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
	int i;
	int sum = 0;
	int flag = 1;

	if (argc < 2)
		printf("%d\n", sum);
	else if (argc >= 2)
	{
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) == 0)
	{
			printf("Error\n");
			flag = 0;
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
		if (flag == 1)
		printf("%d\n", sum);
	}

	return (0);
}
