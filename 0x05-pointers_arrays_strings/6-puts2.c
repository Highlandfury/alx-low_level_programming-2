#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 * Return: Always 0.
 */


void puts2(char *str)
{
	int i,

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}

	_putchar('\n');
}
