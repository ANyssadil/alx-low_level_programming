#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char Char;
int Int;
long int LInt;
long long int LLInt;
float Float;

printf("Size of a char: %d byte(s)\n", sizeof(Char));
printf("Size of an int: %d byte(s)\n", sizeof(Int));
printf("Size of a long int: %d byte(s)\n", sizeof(LInt));
printf("Size of a long long int: %d byte(s)\n", sizeof(LLInt));
printf("Size of a float: %d byte(s)\n", sizeof(Float));

return (0);
}
