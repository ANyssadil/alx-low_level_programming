#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
   for( i = 48; i < 57; i++)
{
putchar(i);
/*putchar(',');*/
putchar(44);
/*putchar(' ');*/
putchar(32);
}

putchar(57);
/*putchar('\n');*/

return (0);
}
