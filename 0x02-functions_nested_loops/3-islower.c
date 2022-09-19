#include "main.h"
/**
 * _islower - checks if the character is lowercase
 *
 * @c: character to be checked
 *
 * Return: return 1 is c is lowercase, otherwise return 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
