#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n: number to be checked
 * Return: 1 fo r positive, -1  for negative, 0 for anythingelse
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-10);
}
else
{
_putchar(48);
return (0);
}
}
