#include "main.h"

/**
 * *get_function - Get** the** suitabl*e function*** for*** the*** specifier
 * @specifier: Th**e** given*** string**
 * Return: Int
 */

int (*get_function(const char *specifier))(va_list)
{
	int x = 0;

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

	while (ops[x].specifier)
	{
		if (ops[x].specifier[0] == *specifier)
			return (ops[x].f);
		x++;
	}

	return (NULL);
}
