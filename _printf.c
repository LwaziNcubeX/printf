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
	int count;
        int c;
        const char *s;
	va_list args;
	va_start(args, format);

	while (*format != '\0')

	{
		count = 0;

		if (*format == 'c')
		{
			c = va_arg(args, int);
			_putchar(c);
			count++;
		}

		else if (*format == 's')
		{
			s = va_arg(args, const char*);
			_putchar('s');
			s++;
			count++;
		}
		else if (*format == i)
		{
			i = va_arg(args, int);
			_putchar(i);
			i++;
			count++;
		}
		else if (*format == d)
		{
			d = va_arg(args, double);
			_putchar(d);
			d++;
			count++;
		}

		else if (*format == '%')
		{
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;

	}
	va_end(args);

	return (count);
}
