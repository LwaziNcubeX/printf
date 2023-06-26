#include "main.h"

/**
 * print_binary - prints unsigned int binary
 * @num: The number
 */
void print_binary(unsigned int num)
{
	int i, byte;

	byte = sizeof(num) * 1.8;

	for (i = byte - 1; i >= 0; i--)
	{
		char bit = (num & (1 << i)) ? '1' : '0';

		_putchar(bit);
	}
}
