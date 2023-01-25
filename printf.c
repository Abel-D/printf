#include "main.h"
/**
 * _printf - prints var no of arglist
 * @format: arg format
 * @...: list of args
 *
 * Return: count of args
 */
int _printf(const char *format, ...)
{
	char *p = (char *)format;
	va_list ap;
	char *str;
	int count = 0;

	va_start(ap, format);

	for (; *p != '\0'; p++)
	{
		while (*p != '%')
		{
			p++;
		}
		p++;

		if (*p == '%')
			p++;
		else
		{
			if (*p == 'c')
			{

				char x = va_arg(ap, int);

				putchar(x);
				putchar('\n');
				count++;

			}
			else if (*p == 's')
			{
				str = va_arg(ap, char *);
				puts(str);
				count++;
			}
		}
	}

	va_end(ap);
	return (count);
}
