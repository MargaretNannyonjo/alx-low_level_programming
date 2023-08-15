#include <stdio.h>
/**
  *Description:main - Prints the alphabet
  *Return: 0 if success
  */
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alph[i]);
}
putchar('\n');
return (0);
}
