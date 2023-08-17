#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer parameter
 * Return: 0 if success
 */
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = n * -1;
}
if (num > 9)
print_number(num / 10);
_putchar(num % 10 + '0');
}
