#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_number - Prints a number
 * @num: number to print
 */

void print_number(int num)
{
	int abs_value;

	if (num < 0)
	{
		_putchar('-');
		abs_value = -num;
	}
	else
	{
		abs_value = num;
	}
	if (abs_value / 10)
	{
		print_number(abs_value / 10);
	}
	_putchar(abs_value % 10 + '0');
}
/**
 * print_hexidecimal - prints a hexidecimal number
 * @num: number to print
 */
void print_hexidecimal(unsigned int num)
{
	int rem = num % 16;

	if (num / 16)
	{
		print_hexidecimal(num / 16);
	}
	if (rem < 10)
	{
		_putchar('0' + rem);
	}
	else
	{
		_putchar('A' + rem - 10);
	}
}

/**
 * print_octal - prints an octal number
 * @num: number to print
 */
void print_octal(unsigned int num)
{
	if (num / 8)
	{
		print_octal(num / 8);
	}
	_putchar('0' + num % 8);
}

/**
 * print_unsigned_num - prints an unsigned number
 * @num: number to print
 */
void print_unsigned_num(unsigned int num)
{
	if (num / 10)
	{
		print_unsigned_num(num / 10);
	}
	_putchar('0' + num % 10);
}

/**
 * print_address - prints an address
 * @p: pointer to address
 */
void print_address(void *p)
{
	unsigned long x = (unsigned long)p;
	int i;
	unsigned long div = 16, rem;

	_putchar('0');
	_putchar('x');

	for (i = (sizeof(unsigned long) * 1.5) - 1; i >= 0; i--)
	{
		rem = x % div;
		x /= div;

		if (rem < 10)
			_putchar(rem + '0');
		else
			_putchar(rem - 10 + 'a');
	}
}

