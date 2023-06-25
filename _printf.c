#include "main.h"
#include <stdarg.h>
/**
 * _printf - Produces output according to a format
 * @format: format to produce
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	char c, *s;
	int i, count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				while (*s)
				{
					_putchar(*s);
					s++;
					count++;
				}
			}
			else if (*format == 'i' || *format == 'd')
			{
				i = va_arg(args, int);
				print_number(i);
				count++;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				count++;
			}
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
