#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked for
 * Return: 1 if c is found or 0 if anything else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
