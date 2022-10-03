#include "main.h"
/**
 * _strncpy - Copy a string startinf from index 0 of `dest`.
 *
 * @dest: The buffer storing the string copy.
 *
 * @src: The source string.
 *
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
