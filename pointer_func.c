#include "main.h"

/**
 * print_p_helper - convert and print ptr.
 * @ptr: The pointer.
 * @count: The number.
 *
 * Return: Void.
 */

void print_p_helper(unsigned long ptr, int *count)
{
	int value;

	if (ptr > 15)
		print_p_helper(ptr >> 4, count);

	if (*count == -1)
		return;

	if ((ptr & 15) < 10)
		value = _putchar('0' + (ptr & 15));
	else
		value = _putchar('a' + (ptr & 15) % 10);

	if (value == -1)
		*count = -1;
	else
		*count += value;
}

/**
 * print_pointer - print a pointer address.
 * @list: The arugments.
 *
 * Return: Int.
 */

int print_pointer(va_list list)
{
	int count = 0;
	void *ptr = va_arg(list, void *);

	if (!ptr)
		return (_printf("(nil)"));

	count = _printf("0x");

	if (count == -1)
		return (count);

	print_p_helper((unsigned long) ptr, &count);

	return (count);
}
