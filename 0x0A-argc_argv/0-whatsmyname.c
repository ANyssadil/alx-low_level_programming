#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 *@argc: number of arguments on the command line.
 *@argv: array containing the command-line arguments .
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
	printf("%s\n", argv[0]);
	return (0);
}
