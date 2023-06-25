#include "main.h"
#include <stdarg.h>

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
