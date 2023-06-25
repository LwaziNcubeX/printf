#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: format to produce
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	char c;
	char *s;
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
			/*else if (*format == 'd' || *format == 'i')*/
			else
			{
				_putchar('%');
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
