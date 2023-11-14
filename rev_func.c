#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_rev(va_list list)
{
	int i = 0, j, count = 0;
	char *s = va_arg(list, char *);

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
		count++;
	}

	return (count);
}
