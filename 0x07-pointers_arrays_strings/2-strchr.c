#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: output
 * Return: 0 if success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
