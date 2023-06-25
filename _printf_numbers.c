#include "main.h"
#include <stdarg.h>

/**
 * _printf_numbers - Prints numbers
 * @format: The format
 *
 * Return: number
 */
int _printf_numbers(const char *format, ...)
{
	int i, count = 0;
	va_list num;
	va_start(num, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'i')
			{
				i = va_arg(num, int);
				if (i < 0)
				{
					_putchar('-');
					count++;
					i = -i;
				}
				else
				{
					_putchar('i');
					count++;
				}
			}
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
	va_end(num);
	return (count);
}
