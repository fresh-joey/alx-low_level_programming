#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print all possible combination of two two-digit numbers
 *
 * the numbers should range from 0 to 99 and separated by a space
 *
 * the combination of numbers must be separated by a comma followed by a space
 *
 * the combination of numbers must be in ascending order
 *
 * you can only use `putchar` function and maximum of eight times
 *
 * you are not allowed to use any variable of type `char`
 *
 * Return: 0
 *
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar ((num1 / 10) + '0');
			putchar ((num1 % 10) + '0');
			putchar (' ');
			putchar ((num2 / 10) + '0');
			putchar ((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;

			putchar (',');
			putchar (' ');
		}
	}

	putchar ('\n');

	return (0);
}
