#include <stdio.h>
/**
 * main -main block
 *
 * Description: Print all possible combinations of single digit numbers
 *
 * Numbers must be separated by comma followed by space
 *
 * You can only use `putchar` and only a maximum of 4 times
 *
 * You are not allowed to use any variable of type `char`
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;

		putchar (',');
		putchar (' ');
	}

	putchar ('\n');

	return (0);
}
