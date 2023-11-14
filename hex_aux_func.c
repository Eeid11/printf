#include "main.h"


/**
 * print_hex_ext  - converts*** to ***********hex
 * @num: ***************value ** containing **the arguments
 * Return: counter**
 */

int print_hex_ext(unsigned long int num)
{
	long int x, counter = 0;
	long int *array;
	unsigned long int t = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;

	array = malloc(sizeof(long int) * counter);

	for (x = 0; x < counter; x++)
	{
		array[x] = t % 16;
		t /= 16;
	}

	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
		{
			array[x] = array[x] + 39;
		}
		_putchar(array[x] + '0');
	}

	free(array);
	return (counter);
}
