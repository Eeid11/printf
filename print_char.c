#include "main.h"

/**
 * print_char - prints a character.
 * @list: The given arguments.
 *
 * Return: 1.
 */

int print_char(va_list list)
{
	int value, count = 0;
	char my_char = va_arg(list, int);

	value = _putchar(my_char);

	if (value == -1)
		return (-1);
	count++;

	return (count);
}
