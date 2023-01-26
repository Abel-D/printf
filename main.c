


#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
    _printf("%d\n", len, len);
    _printf("Negative:[%d]\n", -762534);
  /*  _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
  */  _printf("character:[%c]\n", 'H');
	_printf("string:[%s]\n", "I am a string !");
	_printf("Len:[%d]\n", len2);
   
 
    return (0);
}
