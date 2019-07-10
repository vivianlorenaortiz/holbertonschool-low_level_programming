#include "holberton.h"
/**
 *sol - value result
 *@x: value
 *@l: value
 *Return: l
 */
int sol(int x, int l)
{
	if (x == l * l)
		return (l);
	else if (x < 0)
		return (-1);
	else if (x < l * l)
		return (-1);
	else
		return (sol(x, (l + 1)));
}
#include "holberton.h"
/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: value
 *Return: result
 */
int _sqrt_recursion(int n)
{
	int l;

	l = 1;

	return (sol(n, l));
}
