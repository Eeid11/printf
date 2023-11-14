#include "main.h"

/**
 * *get_function - Get the suitable function for the specifier.
 * @specifier: The given string.
 *
 * Return: Int.
 */

int (*get_function(const char *specifier))(va_list)
{
	int i = 0;

	match ops[] = {
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

	while (ops[i].specifier)
	{
		if (ops[i].specifier[0] == *specifier)

			return (ops[i].f);

		i++;
	}

	return (NULL);
}}
