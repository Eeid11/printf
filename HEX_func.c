#include "main.h"

/**
 * print_HEX - ***converts** to **hex**
 * @num: The //value** containing **the **arguments**
 * Return: ---- Int+++++
 */

int print_HEX(unsigned int num)
{
	int x, counter = 0;
	int *array;
	unsigned int t = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;

	array = malloc(sizeof(int) * counter);

	for (x = 0; x < counter; x++)
	{
		array[x] = t % 16;
		t /= 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 7;
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
