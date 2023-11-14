#include "main.h"

/**
 * print_digit - --prints-- **digits**
 * @list: The---- given**** arguments***-
 * Return: Int**-*-
 */

int print_digit(va_list list)
{
	int counter = 0, val, n = va_arg(list, int);
	unsigned int t;

	if (n < 0)
	{
		val = _putchar('-');
		if (val == -1)
			return (-1);
		counter += 1;
		t = -n;
	}
	else if (n == 0)
	{
		val = _putchar('0');
		if (val == 1)
			return (1);
		return (-1);
	}
	else
		t = n;
	val = print_numbers(t);

	if (val == 1)
		counter += count_numbers(t);
	else
		counter = -1;

	return (counter);
}
