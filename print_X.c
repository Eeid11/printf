#include "main.h"

/**
 * print_X- converts to hex
 * @list: va_list containing the arguments
 * Return: counter
 */

int print_X(va_list list)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int ten = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;

	array = malloc(sizeof(int) * counter);


	for (i = 0; i < counter; i++)
	{
		array[i] = ten % 16;
		ten /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
