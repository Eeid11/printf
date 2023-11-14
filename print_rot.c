#include "main.h"

/**
 * print_rot -  encodes a string using rot13.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_rot(va_list list)
{
	int i, j;
	char *s = va_arg(list, char *);
	char x[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char y[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	char *enc = NULL;

	enc = malloc((_strlen(s) + 1) * sizeof(char));

	if (!s || !enc)
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				enc[i] = y[j];
				break;
			}
		}

		if (s[i] != x[j])
			enc[i] = s[i];
	}

	for (i = 0; enc[i] != '\0'; i++)
		_putchar(enc[i]);

	free(enc);
	return (i);
}
