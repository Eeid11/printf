#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct format - Struct type.
 *
 * @specifier: The specifier.
 * @f: The function associated.
 */

typedef struct format
{
	char *specifier;
	int (*f)(va_list);
} match;




int _putchar(char c);
int _strlen(char *s);
int print_char(va_list list);
int print_string(va_list list);
int print_numbers(unsigned int num);
int count_numbers(unsigned int num);
int print_digit(va_list list);
int count_binary(unsigned int num);
int print_binary(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int count_octal(unsigned int num);
int print_x(va_list list);
int print_X(va_list list);
int print_HEX(unsigned int num);
int print_hex_ext(unsigned long int num);
int print_exc_string(va_list list);
int print_pointer(va_list list);
int print_rev(va_list list);
int print_rot(va_list args);

int (*get_function(const char *specifi))(va_list);
int _printf(const char *format, ...);

#endif /* MAIN */

