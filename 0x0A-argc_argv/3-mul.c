#include <stdio.h>
#include <stdlib.h>
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

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d\n", a * b);
}
	else
	{
		printf("Error\n");
		return (-1);
	}

	return (0);
}
