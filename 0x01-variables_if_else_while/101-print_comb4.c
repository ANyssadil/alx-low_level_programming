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
int k;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
if (i != j && i < j && j < k)
{
putchar(i);
putchar(j);
putchar(k);
if(i != 55 || j !=56 || k !=57)
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

