#include<stdio.h>
/**
 * _islower - checks for lowercase character.
 * @c: The character to print
 * Return: 1 if c is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

else if (c >= 'A' && c <= 'Z')
{
return (0);
}
}