#include "main.h"
/**
 * is_prime_number - returns 1 if the input
 * is a prime number, otherwise return 0.
 * @n: number to evaluate
 * Return: 1 if n is a prime number
 * otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if the a
 * number is prime recursively
 * @n: nuber to evaluate
 * @i: iterator
 * Return: 1 if n is prime else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
