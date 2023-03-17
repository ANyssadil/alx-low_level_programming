#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main ()
{
        char i;

for (i='a'; i<='z'; i++)
{
        putchar(i);

}

for (i='A'; i<='Z'; i++)
{
        putchar(i);

}

putchar('\n');
return (0);
}
