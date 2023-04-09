#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - min number of coins to make change for an amount of money.
 *@argc: number of arguments on the command line.
 *@argv: array containing the command-line arguments .
 * Return: Always 0.
 */
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

	int c[5] = {25, 10, 5, 2, 1};
	int a;
	int s = 0;
	int i;
	int r1, r2;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a <= 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				r1 = a / c[i];
				r2 = a % c[i];
				s += r1;
				a = r2;
			}
		}
		printf("%d\n", s);
		return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
