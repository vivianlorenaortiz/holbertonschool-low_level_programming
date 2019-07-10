#include "holberton.h"
/**
 *_pow_recursion - function that returns the value  x raised to the power of y
 *@x: digit.
 *@y: digit
 *Return: -1
 */

int _pow_recursion(int x, int y)

{

	if (y == 0)

		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
