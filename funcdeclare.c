#include "main.h"
/**
 * print_numbers - prints ************ integer
 * @num: The number ************* printed
 * Return: ********Int************
 */

int print_numbers(unsigned int num)
{
	int val;
	unsigned int t = num;

	if ((t / 10) > 0)
		print_numbers(t / 10);
	val = _putchar('0' + num % 10);

	return (val);
}

/**
* count_numbers - number************* coun
* @num: the** given** number
* Return: **Int**
*/

int count_numbers(unsigned int num)
{
	int counter = 0;

	while (num > 0)
	{
		counter++;
		num /= 10;
	}

	return (counter);
}

/**
* count_binary - count **how **many** binary** digit*
* @num: the** number**
* Return: **Int**
*/

int count_binary(unsigned int num)
{
	int counter = 0;

	while (num > 0)
	{
		counter++;
		num /= 2;
	}

	return (counter);
}

/**
* count_octal - count** how** many** octal** digits**
* @num: **the** number**
* Return: **Int**
*/

int count_octal(unsigned int num)
{
	int counter = 0;

	while (num > 0)
	{
		counter++;
		num /= 8;
	}

	return (counter);
}

/**
 * _strlen - **returns** the** length** of** a** string**
 * @s: **The** given** string**
 * Return: The** length********
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
