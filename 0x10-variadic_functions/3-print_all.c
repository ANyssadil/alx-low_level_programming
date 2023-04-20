#include "variadic_functions.h"

/**
 * print_all -  prints anything.
 *@format: list of types of arguments passed to the function.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i, j, flag = 0;
	const char format_spec[] = "ifcs";
	char *s;

	va_start(ptr, format);
	i = 0;
	while (format && format[i])
	{	j = 0;
		while (format_spec[j])
		{
			if (format[i] == format_spec[j] && flag != 0)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ptr, int)), flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double)), flag = 1;
				break;
			case 'c':
				printf("%c", va_arg(ptr, int)), flag = 1;
				break;
			case 's':
				s = va_arg(ptr, char *), flag = 1;
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		} i++;
	} printf("\n");
	va_end(ptr);
}
