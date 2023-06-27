#include <stdarg.h>
#include "main.h"

/**
 * print_args - Prints arguments
 * @specif: The format specifier
 * @args: The argument
 *
 * Return: The nummber of characters printed
 */
int print_args(char specif, va_list args)
{
	int count = 0;

	switch (specif)
	{
		case 'c':
			print_char(args);
			break;
		case 's':
			print_str(args);
			break;
		case 'i':
		case 'd':
			print_nums(args);
			break;
		case 'b':
			print_bin(args);
			break;
		case 'x':
		case 'X':
			print_hex(args);
			break;
		case 'o':
			print_oct(args);
			break;
		case 'u':
			print_unum(args);
			break;
		case 'p':
			print_addr(args);
			break;
		default:
			print_x(count);
			_putchar(specif);
			break;
	}
	return (count);
}