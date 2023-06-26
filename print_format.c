#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints characters
 * @args: arguments
 */
void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
}

/**
 * print_str - prints strings
 * @args: arguments
 */
void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

/**
 * print_nums - prints integer
 * @args: arguments
 */
void print_nums(va_list args)
{
	int i;

	i = va_arg(args, int);
	print_number(i);

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

/**
 * print_bin - Prints unsigned binary
 * @args: the arguments
 */
void print_bin(va_list args)
{
	unsigned int i;

	i = va_arg(args, unsigned int);
	print_binary(i);
}
