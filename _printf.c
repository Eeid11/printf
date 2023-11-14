#include "main.h"
/**
 * _printf - output according to format
 * @format: given string
 * Description: emulates the functionality of standard
 * printf function
 * Return: Int
 */
int _printf(const char *format, ...)
{
	va_list list;
	int counter = 0, (*func)(va_list) = NULL;

	va_start(list, format);
	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (-1);

	while (*format)
	{
		if (*(format + 1) != '%' && *format == '%')
		{
			format++;
			func = get_function(format);
			if (*(format) == '\0')
				return (-1);
			else if (func == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*(format));
				counter += 2;
			}
			else
				counter += func(list);
		}
		else if (*(format + 1) == '%' && *(format) == '%')
		{
			format++;
			counter += _putchar('%');
		}
		else
		{
			_putchar(*(format));
			counter++;
		}
		format++;
	}

	va_end(list);
	return (counter);
}
