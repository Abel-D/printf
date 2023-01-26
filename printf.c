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
<<<<<<< HEAD
=======
					count++;
					break;
				}
				case 's':
				{
					str = va_arg(ap, char *);
					printf("%s", str);
>>>>>>> 0ca0ad6fe085532011aff2e9fbbebbf432147ee3
					count++;
					break;
				}
				case 'd':
				{
<<<<<<< HEAD
					char *str = va_arg(ap, char *);
					printf("%s", str);
					count++;
					break;
				}
				case ('d'):
				{
					int k = va_arg(ap, int);
					printf("%d", k);
					count++;
					break;
				}
				case ('i'):
				{
					int s = va_arg(ap, int);
					printf("%i", s);
=======
					int k = va_arg(ap, int);

					printf("%d", k);
>>>>>>> 0ca0ad6fe085532011aff2e9fbbebbf432147ee3
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
