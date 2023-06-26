#include "main.h"
#include <stdarg.h>
/**
 * _printf - Produces output according to a format
 * @format: format to produce
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
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
				print_char(args);
			else if (*format == 's')
				print_str(args);
			else if (*format == 'i' || *format == 'd')
				print_nums(args);
			else if (*format == 'b')
				print_bin(args);
			else
			{
				print_x(count);
				_putchar(*format);
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
