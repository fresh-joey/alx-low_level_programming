#include "main.h"
/**
 * print_last_digit - print the last digit of  number
 *
 * @n: the number to print it's last digit
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
}
