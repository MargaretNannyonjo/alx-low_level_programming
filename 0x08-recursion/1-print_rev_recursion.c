#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to be printed
 * Return: 0 if success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
