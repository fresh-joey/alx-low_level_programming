#include <stdio.h>
/**
 * main -main block
 *
 * Description: Print all possible combination of two digits
 *
 * the two digits must be different
 *
 * print only the smallest combination of the two digits
 *
 * numbers should be printed on ascending order with two digits
 *
 * you can only use the `putchar` function and a mximum of 5 times
 *
 * you are not allowed to use any variable of type `char`
 *
 * Return: 0
 *
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
																			}
	}
	putchar('\n');

	return (0);

}
