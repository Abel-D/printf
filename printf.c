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

	va_start(ap, format);
	while (*format != '\0')
	{

		if (*format != '%')
		{
			printf("%c", *format);
		}
	/*	while (*p != '\0')
		{
			p++;
		}*/
		else
		{
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
					char *str = va_arg(ap, char *);
					printf("%s\n", str);
					count++;
					break;
				}
			}
		}

		format++;
	}

	va_end(ap);
	return (count);
}
