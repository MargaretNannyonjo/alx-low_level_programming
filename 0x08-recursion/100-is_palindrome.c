#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome
 * and 0 if not
 * @s: string to reverse
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the character recursively
 * for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of a string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
			if (i >= len)
			return (1);
			if (*(s + i) != *(s + len - 1))
					return (0);
			return (check_pal(s, i + 1, len - 1));
}
