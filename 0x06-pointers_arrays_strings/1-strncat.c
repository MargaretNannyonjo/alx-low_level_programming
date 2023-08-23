#include "main.h"
/**
 * _strncat - concatenate two strings
 * @src: source of the string
 * @dest: destination of a string
 * @n: input value
 * Return: a pointer to the destination string(@dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
