#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - function tht result the sum of all its parameters.
 *@n: numberof arguments.
 *@...: arguments to sum
 *Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(number, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(number, int);
	}
	va_end(number);

	return (sum);
}
