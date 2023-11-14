#include "main.h"

/**
 * print_binary - convert thr  decimal to binary
 * @list: The given arguments
 * Return: Int.
 */

int print_binary(va_list list)
{
	int x, val, counter = 0;
	unsigned int n = va_arg(list, unsigned int);
	char *str;

	if (n < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	counter += count_binary(n);
	str = malloc(sizeof(char) * (counter + 1));

	if (str == NULL)
		return (-1);
	for (x = 1; x < counter + 1; x++)
	{
		str[counter - x] = n % 2;
		n = n / 2;
	}
	for (x = 0; x < counter; x++)
	{
		val = _putchar(str[x] + '0');
		if (val == -1)
		{
			free(str);
			return (-1);
		}
	}
	free(str);

	return (counter);
}
