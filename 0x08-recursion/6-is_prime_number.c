#include "holberton.h"
/**
 *sol - value result
 *@x: value
 *@n: value
 *Return: 0 - 1
 */
int sol(int x, int n)
{
	int sum = 0;

	if (x <= n)
	{
		if (n % x == 0)
		sum++;
		return (sum + sol(x + 1, n));
	}
	return (sum);
}

#include "holberton.h"
/**
 * is_prime_number - function that returns the natural square root of a number
 *@n: number
 *Return: 0 -1
 */
int is_prime_number(int n)
{


	if (sol(1, n == 2))
		return (0);
}
