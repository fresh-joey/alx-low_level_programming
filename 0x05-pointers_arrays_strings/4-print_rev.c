#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: the string to be reversed
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i--)
		_putchar(i);

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
