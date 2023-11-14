#include "main.h"
/**
 * print_numbers - print int
 * @number: number to print
 * Return: Int
 */

int print_numbers(unsigned int number)
{
	int val;
	unsigned int t = n;

	if ((t / 10) > 0)
		print_numbers(t / 10);
	val = _putchar('0' + n % 10);

	return (val);
}

/**
* count_numbers - number count
* @number: given num
*
* Return: Int
*/

int count_numbers(unsigned int number)
{
	int counter = 0;

	while (number > 0)
	{
		counter++;
		number /= 10;
	}

	return (counter);
}

/**
* count_binary - count binary digits
* @number: number
* Return: Int
*/

int count_binary(unsigned int number)
{
	int counter = 0;

	while (number > 0)
	{
		counter++;
		number /= 2;
	}

	return (counter);
}

/**
* count_octal - count octal digits
* @number: number
* Return: Int
*/

int count_octal(unsigned int number)
{
	int counter = 0;


	while (number > 0)
	{
		counter++;
		number /= 8;
	}

	return (counter);
}

/**
 * _strlen - returns the leng
 * @st: The string
 * Return: length string
 */

int _strlen(char *st)
{
	int x = 0;


	while (st[x] != '\0')
	{
		x++;
	}

	return (x);
}
