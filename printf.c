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
	char *str;
	int count = 0;
	char *p;

	va_start(ap, format);
	p = format;
	while (*format != '\0')
	{

		while (*format != '%')
		{
			printf("%c", *format);
			format++;
		}
		while (*p != '\0')
		{
			p++;
		}
		switch(*format)
		{
			case '%':
				break;
			case 'c':
			{
				char x = va_arg(ap, int);

				printf("%c\n", x);
				count++;
				break;
			}
			case ('s'):
			{
				str = va_arg(ap, char *);
				printf("%s\n", str);
				count++;
				break;
			}
		}

		format++;
	}

	va_end(ap);
	return (count);
}
