#include "main.h"
#include <string.h>
/**
 * _printf - prints var no of arglist
 * @format: arg format
 * @...: list of args
 *
 * Return: count of args
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	char *str;
	char x;
	int k;
	unsigned int i;

	va_start(ap, format);
	while (*format != '\0')
	{

		if (*format != '%')
		{
			printf("%c", *format);
		}
		else
		{
			format++;
			switch(*format)
			{
				case 'c':
				{
					x = va_arg(ap, int);

					putchar(x);
					count++;
					break;
				}
				case 's':
				{
					str = va_arg(ap, char *);
					printf("%s", str);
					count++;
					break;
				}
				case ('d'):
				{
					k = va_arg(ap, int);
					printf("%d", k);
					count++;
					break;
				}
				case ('i'):
				{
					k = va_arg(ap, int);
					printf("%i", k);
					count++;
					break;
				}
				case ('u'):
				{
					i = va_arg(ap, unsigned int);
					printf("%u", i);
					count++;
					break;
				}
			}
		}

		++format;
	}

	va_end(ap);
	return (count);
}
