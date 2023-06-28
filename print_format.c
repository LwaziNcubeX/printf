#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_str - prints strings
 * @args: arguments
 *
 * Return: length
 */
int print_str(va_list args)
{
	int len = 0;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s)
	{
		_putchar(*s);
		len++;
		s++;
	}
	return (len);
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
	int count = 0;

	i = va_arg(args, unsigned int);
	print_binary(i);
	count++;
}
