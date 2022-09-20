#include "main.h"

/**
 * _puts - prints a string followed a new line to stdout
 *
 * @str: the string to be printed
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}

	_putchar('\n');
}
