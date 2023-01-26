#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - print inputs
 * @format: imput string
 */
void _print(const char * const format, ...)
{
	int i, j = 0;
	char c, *s;
	float f;
	va_list eyu;

	va_start(eyu, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[j])
	{
		
		switch(format[j])
		{
			case 'c':
				c = va_arg(eyu, int);
				printf("%c", c);
				break;
			case 'f':
				f = va_arg(eyu, double);
				printf("%f", f);
				break;
			case 'i':
				i = va_arg(eyu, int);
				printf("%d", i);
				break;
			case 's':
				s = va_arg(eyu, char*);
				if(s == NULL)
				{
					printf("(nil)");
					break;
				}
				else
				printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(eyu);
}
