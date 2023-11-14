#include "main.h"


/**
 * print_hex_ext  - converts to hex
 * @num: value  containing the arguments
 * Return: counter
 */

int print_hex_ext(unsigned long int num)
{
	long int i, counter = 0;
	long int *array;
	unsigned long int ten = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;

	array = malloc(sizeof(long int) * counter);

	for (i = 0; i < counter; i++)
	{
		array[i] = ten % 16;
		ten /= 16;
	}

	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
		{
			array[i] = array[i] + 39;
		}
		_putchar(array[i] + '0');
	}

	free(array);
	return (counter);
}
