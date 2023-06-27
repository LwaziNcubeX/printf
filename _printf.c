#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: format to produce
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{	int count = 0;
	va_list args;

	va_start(args, format);
	if (*format == '\0')
	{
		return (-1);
	}
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
			else
			{
				count += print_args(*format, args);
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
