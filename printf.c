#include "main.h"

int _printf(const char *format, ...)
{
	char *p;
	va_list ap;
	va_start(ap, format);
	char *str;
	int count = 0;

	for (p = format; *p != '\0'; p++)
	{
		if(*p == "%")
			p++;
		else
		{
			if(*p == "c")
			{

					char x = va_arg(ap, int);
					putchar(x);
					putchar('\n');
					count++;

			}
			else if(*p == "s")
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
