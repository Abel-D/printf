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
	char *p = (char *)format;
	va_list ap;
	char *str;
	int count = 0, i = 0;
	int len = strlen(p);

	va_start(ap, format);

	for (i = 0; i <= len; i++)
	{
		while (p[i] != '%')
		{
			i++;
		}
		i++;

		if (p[i] == 'c')
		{

			char x = va_arg(ap, int);

			printf("%c\n", x);
			count++;

		}
		else if (*p == 's')
		{
			str = va_arg(ap, char *);
			puts(str);
			count++;
		}
	}

	va_end(ap);
	return (count);
}
