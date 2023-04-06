#include<stdio.h>
#include "main.h"
/**
 * _isalpha- checks for lowercase character.
 * @c: The character to print
 * Return: 1 if c is  is a letter, lowercase or uppercase
 * 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
