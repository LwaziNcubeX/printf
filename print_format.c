#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints characters
 * @args: arguments
 */
void print_char(va_list args)
{
	char c;
	int count = 0;

	c = va_arg(args, int);
	_putchar(c);
	count++;
}
/**
 * print_str - prints strings
 * @args: arguments
 */
void print_str(va_list args)
{
	char *s;
	int count = 0;

	s = va_arg(args, char *);
	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}
}
/**
 * print_nums - prints integer
 * @args: arguments
 */
void print_nums(va_list args)
{
	int i, count = 0;

	i = va_arg(args, int);
	print_number(i);
	count++;

}
/**
 * print_x - prints %
 * @count: count
 */
void print_x(int count)
{
	count = 0;

	_putchar('%');
	count++;
}

void print_bin(va_list args)
{
	unsigned int i, count = 0;

	i = va_arg(args, unsigned int);
	print_binary(i);
	count++;
}










