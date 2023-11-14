#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - prints a string.
 * @list: The given arguments.
 *
 * Return: Number of characters printed.
 */

int print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0, value;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		value = _putchar(str[i]);

		if (value == -1)
			return (-1);
		i++;
	}

	return (i);
}
