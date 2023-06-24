#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - Produces output according to a format
 * @format: format to produce
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	double d;
	int i;
        int c;
        char *s;
	va_list args;
	va_start(args, format);

	while (*format != '\0')

	{

		if (*format == 'c')
		{
			c = va_arg(args, int);
			_putchar(c);
			
		}

		else if (*format == 's')
		{
			s = va_arg(args, char*);
			_putchar('s');
			s++;
			
		}
		else if (*format == i)
		{
			i = va_arg(args, int);
			_putchar(i);
			
		}
		else if (*format == d)
		{
			d = va_arg(args, double);
			_putchar(d);
			
		}

		else if (*format == '%')
		{
			_putchar('%');
			
		}
		else
		{
			_putchar(*format);
		
		}
		format++;

	}
	va_end(args);

	return (0);
}
