#include "main.h"

/**
 * *get_function - Get the suitable function
 * @specifi: The given string
 * Return: Int
 */

int (*get_function(const char *specifi))(va_list)
{
	int x = 0;

	match op[] = {
		{"s", print_string},
		{"c", print_char},
		{"d", print_digit},
		{"i", print_digit},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_x},
		{"X", print_X},
		{"p", print_pointer},
		{"S", print_exc_string},
		{"r", print_rev},
		{"R", print_rot},
		{NULL, NULL}
	};

	while (op[x].specifi)
	{
		if (op[x].specifi[0] == *specifi)

			return (ops[x].f);

		x++;
	}

	return (NULL);
}
