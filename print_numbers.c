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
void print_hexidecimal(unsigned int num, bool is_lowercase)
{
	int rem = num % 16;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num / 16)
	{
		print_hexidecimal(num / 16, is_lowercase);
	}
	if (rem >= 10 && rem <= 15)
	{
		_putchar((is_lowercase ? 'a' : 'A') + (rem - 10));
	}
	else
	{
		_putchar('0' + rem);
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
	if (num == 0)
	{
		_putchar('0');
		return;
	}
}

/**
 * print_address - prints an address
 * @p: pointer to address
 *
 */

void print_address(void *p)
{
	unsigned long x = (unsigned long)p;
	int i = 0, rem, j;
	char hex[100];

	if (x == 0)
	{
		_putchar('0');
		return;
	}


	while (x > 0)
	{
		rem = x % 16;
		if (rem < 10)
		{
			hex[i] = rem + '0';
		}
		else
		{
			hex[i] = rem - 10 + 'a';
		}
		x /= 16;
		i++;
	}
	_putchar('0');
	_putchar('x');

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
	}
}
