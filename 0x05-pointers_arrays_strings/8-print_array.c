#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array of integers
 *
 * @n: number of elements to be printed
 *
 * number must be separated by comma followed by space
 *
 * numbers should be displayed in the same order they are stored in the array
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, n++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf('\n');
}
