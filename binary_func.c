#include "main.h"

/**
 * print_binary - converts decimal to binary.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_binary(va_list list)
{
	int i, value, count = 0;
	unsigned int n = va_arg(list, unsigned int);
	char *str;

	if (n < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	count += count_binary(n);
	str = malloc(sizeof(char) * (count + 1));

	if (str == NULL)
		return (-1);
	for (i = 1; i < count + 1; i++)
	{
		str[count - i] = n % 2;
		n = n / 2;
	}
	for (i = 0; i < count; i++)
	{
		value = _putchar(str[i] + '0');
		if (value == -1)
		{
			free(str);
			return (-1);
		}
	}
	free(str);

	return (count);
}
