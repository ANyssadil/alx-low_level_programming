#include<stdio.h>
/**
 * main- finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 1;
int i;
unsigned long int c;
unsigned long int d=1000000000;
unsigned long int r;

unsigned long int a_first;
unsigned long int a_sec;
unsigned long int b_first;
unsigned long int b_sec;
unsigned long int c_first;
unsigned long int c_sec;


printf("%lu", b);


		for (i = 0; i < 90; i++)
		{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
		}

		a_first=a/d;
		a_sec=a%d;
		b_first=b/d;
		b_sec=b%d;

   

		for ( i = 90; i < 97; i++)
		{
			r=(a_sec+b_sec)/d;
			c_first=a_first+b_first+r;
			c_sec=(a_sec+b_sec)-d*r; 

			printf(", %lu", c_first);
			printf("%lu", c_sec);

			a_first=b_first;
			a_sec=b_sec;
			b_first=c_first;
			b_sec=c_sec;

		}
printf("\n");
return (0);
} 



