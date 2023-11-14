#include "main.h"

/**
 * print_octal - converts decimal to octal.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_octal(va_list list)
{
	int i, value, count = 0;
	unsigned int reminder, n = va_arg(list, unsigned int);
	char *str;

	if (n < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	count += count_octal(n);
	str = malloc(sizeof(char) * (count + 1));

	if (str == NULL)
		return (-1);
	for (i = 1; i < count + 1; i++)
	{
		reminder = n % 8;
		n = n / 8;
		str[count - i] = reminder + '0';
	}
	for (i = 0; i < count; i++)
	{
		value = _putchar(str[i]);
		if (value == -1)
		{
			free(str);
			return (-1);
		}
	}
	free(str);

	return (count);
}
