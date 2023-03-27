#include <stdio.h>
#include "main.h"
/**
 * _atoi- conversts a string to an integer.
 * @s: string to convert.
 * Return: integer.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int flag = 1;
int n = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			 n = n * 10 + (*(s + i) - '0');
		 
			 if (*(s + i - 1) == '-' && i >= 1)
			 {
				sign = -1;
	 		 }
		  
			flag = 0; 

		}	   	
	       	else if (flag == 0 && !(*(s + i) >= '0' && *(s + i) <= '9'))
	  	{
			break;
		}
		i++;
	}
	return (sign * n);
}
