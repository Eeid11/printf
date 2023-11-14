#include "main.h"

/**
 * print_octal - ***converts****. decimal*** to octa**
 * @list: The **given **arguments***
 * Return: **Int***
 */

int print_octal(va_list list)
{
	int x, val, counter = 0;
	unsigned int reminder, n = va_arg(list, unsigned int);
	char *str;

	if (n < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	counter += count_octal(n);
	str = malloc(sizeof(char) * (counter + 1));

	if (str == NULL)
		return (-1);
	for (x = 1; x < counter + 1; x++)
	{
		reminder = n % 8;
		n = n / 8;
		str[counter - x] = reminder + '0';
	}
	for (x = 0; x < counter; x++)
	{
		val = _putchar(str[x]);
		if (val == -1)
		{
			free(str);
			return (-1);
		}
	}
	free(str);

	return (counter);
}
