#include "main.h"
#include <limits.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count, len, len2;
	unsigned int ui;
	void *addr;

	count = _printf("Hello from the new printf\n");
	printf("%d chars\n", count);
	count = _printf("Hello %s\n", "John");
	printf("%d chars\n", count);
	count = _printf("Char-> %c\n", 'a');
	printf("%d chars\n", count);
	count = _printf("Percent:[%%]\n");
	printf("%d chars\n", count);
	count = _printf("Nbr-> %d\n", -42);
	printf("%d chars\n", count);

	/* ALX's Tests */

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	count = _printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	count = _printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	count = _printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	count = _printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	count = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	count = _printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	count = _printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	count = _printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	count = _printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	count = _printf("Unknown:[%r]\n");
	/* printf("Unknown:[%r]\n"); */

	_printf("%b\n", 98);
	_printf("%S\n", "Best\nSchool");

	return (0);
}
