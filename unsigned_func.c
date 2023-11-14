#include "main.h"

/**
 * print_unsigned - prints address to an unsigned int.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_unsigned(va_list list)
{
	int value, count = 0;
	unsigned int n = va_arg(list, unsigned int);

	if (n < 1)
	{
		_putchar('0');
		return (1);
	}

	value = print_numbers(n);

	if (value == 1)
		count += count_numbers(n);
	else
		count = -1;

	return (count);
}
