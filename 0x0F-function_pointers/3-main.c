#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - check the code
 *@argc: main argument.
 *@argv: main argument.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*gof)(int, int);

	if (argc == 4)
	{
		if (*argv[2] == ('+' || '-' || '*' || '/' || '%'))
		{
			a = atoi(argv[1]);
			b = atoi(argv[3]);
			gof = get_op_func(argv[2]);
			printf("%d\n", gof(a, b));
			return (0);
		}
		printf("Error\n");
		exit(99);
	}
	printf("Error\n");
	exit(98);

}
