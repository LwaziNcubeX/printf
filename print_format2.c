#include "main.h"
#include <stdarg.h>

/**
 * print_hex - prints a hexidecimal
 * @args: arguments
 */
void print_hex(va_list args)
{
	unsigned int i;

	i = va_arg(args, unsigned int);
	print_hexidecimal(i, true);
}

/**
 * print_hdec - prints a hexidecimal
 * @args: arguments
 */
void print_hdec(va_list args)
{
	unsigned int i;

	i = va_arg(args, unsigned int);
	print_hexidecimal(i, false);
}

/**
 * print_oct - prints an octal num
 * @args: arguments
 */
void print_oct(va_list args)
{
	unsigned int i;

	i = va_arg(args, unsigned int);
	print_octal(i);
}

/**
 * print_addr - prints an address
 * @args: arguments
 */
void print_addr(va_list args)
{
	unsigned long i;

	i = va_arg(args, unsigned long);
	print_address(&i);
}

/**
 * print_unum - prints an unsigned number
 * @args: arguments
 */
void print_unum(va_list args)
{
	unsigned int i;

	i = va_arg(args, unsigned int);
	print_unsigned_num(i);
}
