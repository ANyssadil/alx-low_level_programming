#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
if (i != j && i < j)
{
putchar(i);
putchar(j);
if (i != 56)
{
/*putchar(',');*/
putchar(44);
/*putchar(' ');*/
putchar(32);
}
else
{
break;
}
}
else
{
continue;
}
}
}

putchar('\n');

return (0);
}