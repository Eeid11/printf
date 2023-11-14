#include "main.h"
/**
 * _printf - Produces output according to a format.
 * @format: The given string.
 *
 * Description: This program emulates the functionality of the standard
 * printf function.
 *
 * Return: Int.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, (*func)(va_list) = NULL;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format)
	{
		if (*(format) == '%' && *(format + 1) != '%')
		{
			format++;
			func = get_function(format);
			if (*(format) == '\0')
				return (-1);
			else if (func == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*(format));
				count += 2;
			}
			else
				count += func(list);
		}
		else if (*(format) == '%' && *(format + 1) == '%')
		{
			format++;
			count += _putchar('%');
		}
		else
		{
			_putchar(*(format));
			count++;
		}
		format++;
	}
	va_end(list);
	return (count);
}
