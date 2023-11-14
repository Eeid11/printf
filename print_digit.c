#include "main.h"

/**
 * print_digit - prints digits.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_digit(va_list list)
{
	int count = 0, value, n = va_arg(list, int);
	unsigned int tmp;

	if (n < 0)
	{
		value = _putchar('-');
		if (value == -1)
			return (-1);
		count += 1;
		tmp = -n;
	}
	else if (n == 0)
	{
		value = _putchar('0');
		if (value == 1)
			return (1);
		return (-1);
	}
	else
		tmp = n;
	value = print_numbers(tmp);

	if (value == 1)
		count += count_numbers(tmp);
	else
		count = -1;

	return (count);
}
