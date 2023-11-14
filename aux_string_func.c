#include "main.h"

/**
 * print_exc_string - print string
 * @list: value
 * Return: print the number of characters
 */

int print_exc_string(va_list list)
{
	char *x;
	int y, len = 0;
	int val;

	x = va_arg(list, char *);
	if (x == NULL)
		x = "(null)";
	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] < 32 || x[y] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			val = x[y];
			if (val < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX(val);
		}
		else
		{
			_putchar(x[y]);
			len++;
		}
	}
	return (len);
}
