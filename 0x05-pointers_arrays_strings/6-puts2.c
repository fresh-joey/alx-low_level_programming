#include "main.h"
/**
 * puts2 - print one char out of two in a string
 *
 * @str: character of a string to be printed
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
