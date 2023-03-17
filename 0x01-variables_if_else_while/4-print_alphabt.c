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

        if (i=='e' || i=='q')
        {
                continue;
        }
        
        putchar(i); 
        
}

putchar('\n');
return (0);
}
