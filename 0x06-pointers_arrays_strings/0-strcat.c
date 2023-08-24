#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination of a string
 * @src: source of a string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;
a = 0;
b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
