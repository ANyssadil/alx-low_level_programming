#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
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

putchar('\n');

return (0);
}
