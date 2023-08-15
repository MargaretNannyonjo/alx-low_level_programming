#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: empty output
 */
void times_table(void)
{
int x, y, z;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (y != 0)
{
_putchar(44);
_putchar(32);
if (z < 10)
{
_putchar(32);
}
else
{
_putchar((z / 10) + '0');
}
}
_putchar((z % 10) + '0');
if (y != 9)
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
}

