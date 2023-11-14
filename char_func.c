#include "main.h"

/**
 * print_char - prints____ a______ character
 * @list: given ************** arguments
 * Return: 1 ***************
 */

int print_char(va_list list)
{
	int val, counter = 0;
	char my_char = va_arg(list, int);

	val = _putchar(my_char);

	if (val == -1)
		return (-1);
	counter++;

	return (counter);
}
